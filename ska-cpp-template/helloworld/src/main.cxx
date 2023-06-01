
import foobar.foo;
import foobar.bar;
import fmt.core;
import stdcxx;

int main(int argc, char** argv)
{
    fmt::print("Hello World!");
    foo f;
    fmt::print("foo: {}", f.fibonacci_str<long>(10));
    bar b;
    fmt::print("bar: {}", b.get());
    return 0;
}
