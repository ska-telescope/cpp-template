#include <vector>
#include <regex>

import boost.ut;
import stdcxx;

using namespace boost::ut;

suite headers_suite = [] {
    "vector"_test = [] {
        expect(std::vector<int>{0,1}.size() == 2l);
    };

    "regex"_test = [] {
        const std::regex pattern = std::regex("");
    };
};