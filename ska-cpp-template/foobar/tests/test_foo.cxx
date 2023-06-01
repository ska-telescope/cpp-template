import boost.ut;
import foobar.foo;

using namespace boost::ut;

suite foo_suite = [] {
    const foo f;

    "simple"_test = [&] {
        expect(1 == 1_i);
    };
    "name"_test = [&] {
        expect(f.name() == "foo");
    };
    "std_range_str"_test = [&] {
        expect(f.std_range_str(0,5) == "[0 1 2 3 4 ]");
    };
    "ranges_range_str"_test = [&] {
        expect(f.ranges_range_str(0,5) == "[0,1,2,3,4]");
    };
    "fibonacci_str"_test = [&] {
        expect(f.fibonacci_str<long>(5) == "[0,1,1,2,3]");
    };
};
