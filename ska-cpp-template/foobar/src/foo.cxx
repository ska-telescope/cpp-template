export module foobar.foo;

import foobar.fibonacci;
import range_v3;
import stdcxx;

// See https://www.walletfox.com/course/quickref_range_v3.php
export class foo
{
public:
  foo() = default;
  ~foo() = default;

  std::string name() const { return "foo"; }

  std::string std_range_str(int start, int end) const
  {
    std::stringstream ss;
    //views::intersperse
    ss << "[";
    for (auto x : std::views::iota(start, end))
    {
      ss << x << " ";
    }
    ss << "]";
    return ss.str();
  }

  std::string ranges_range_str(int start, int end) const
  {
    std::stringstream ss;
    ss << ranges::views::iota(start, end);
    return ss.str();
  }

  template<typename T>
  std::string ranges_range_str(std::vector<T> range) const
  {
    // // Ranges-v3
    //ranges::views::all(range)
    std::stringstream ss;
    ss << "[";
    for (auto x : range)
    {
      ss << x  << " ";
    }
    ss << "]";
    return ss.str();
  }

  template<typename T>
  std::string fibonacci_str(int count) const
  {
    std::stringstream ss;
    auto fibrange = fibonacci<T>() | ranges::views::take(count) | ranges::to<std::vector<T>>();
    ss << ranges::views::all(fibrange);
    return ss.str();
  }
};
