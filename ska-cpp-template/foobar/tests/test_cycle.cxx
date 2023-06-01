import boost.ut;
import foobar.cycle;
import stdcxx;

using namespace boost::ut;

suite cycleA_suite = [] {
    "name"_test = [] {
        cycleA a;
        expect(a.name() == "cycleA");
    };
    "concat_names"_test = [] {
        cycleA a;
        cycleB b;
        expect(a.concat_names(b) == "cycleAcycleB");
    };
};

suite cycleB_suite = [] {
    "name"_test = [] {
        cycleB b;
        expect(b.name() == "cycleB");
    };
    "concat_names"_test = [] {
        cycleA a;
        cycleB b;
        expect(b.concat_names(a) == "cycleBcycleA");
    };
};