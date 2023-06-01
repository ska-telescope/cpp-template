
import boost.ut;
import foobar.bar;
import stdcxx;

using namespace boost::ut;

suite bar_suite = [] {
    "simple"_test = [] {
        expect(1 == 1);
    };
    "name"_test = [] {
        bar b;
        expect(b.name() == "bar");
    };
    "get"_test = [] {
        bar b;
        expect(b.get() == 1_i);
    };
};