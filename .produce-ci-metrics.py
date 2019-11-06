import json
import os
import subprocess
import sys
import time
import xml.dom.minidom


def _has_subelement(element, subelement_name):
    return len(element.getElementsByTagName(subelement_name)) > 0

def get_git_sha():
    if 'CI_COMMIT_SHA' in os.environ:
        return os.environ['CI_COMMIT_SHA']
    return subprocess.check_output(['git', 'rev-parse', 'HEAD']).strip()

def get_coverage_metrics(cov_xml_file):
    cov_dom = xml.dom.minidom.parse(cov_xml_file)
    coverage = cov_dom.getElementsByTagName('coverage')[0]
    coverage_line_rate = float(coverage.attributes['line-rate'].value)
    return {
        'percentage': coverage_line_rate * 100
    }

def get_tests_metrics(utests_xml_file):
    utests_xml = xml.dom.minidom.parse(utests_xml_file)
    test_cases = utests_xml.getElementsByTagName('testcase')
    errors = len(filter(lambda tc: _has_subelement(tc, 'error'), test_cases))
    failures = len(filter(lambda tc: _has_subelement(tc, 'failure'), test_cases))
    return {
        'errors': errors,
        'failures': failures,
        'total': len(test_cases)
    }

def get_build_status(ci_metrics):
    test_metrics = ci_metrics['tests']
    if test_metrics['errors'] > 0 or test_metrics['failures'] > 0:
        build_status = 'failed'
    else:
        build_status = 'passed'

    return {
        'last': {
            'status': build_status,
            'timestamp': time.time()
        }
    }

def produce_ci_metrics(build_dir):
    cov_xml_file = os.path.join(build_dir, 'code-coverage.xml')
    utests_xml_file = os.path.join(build_dir, 'unit-tests.xml')
    lint_xml_file = os.path.join(build_dir, 'unit-tests.xml')

    ci_metrics = {
        'commit_sha': get_git_sha(),
        'coverage': get_coverage_metrics(cov_xml_file),
        'tests': get_tests_metrics(utests_xml_file),
    #    'lint': get_lint_metrics(lint_xml_file)
    }
    ci_metrics['build-status'] = get_build_status(ci_metrics)
    print(json.dumps(ci_metrics, indent=2))

if __name__ == '__main__':
    produce_ci_metrics(sys.argv[1])
