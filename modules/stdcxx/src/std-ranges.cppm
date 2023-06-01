module;
#include <ranges>
export module stdcxx:ranges;

export namespace std::ranges
{
    using std::ranges::begin;
    using std::ranges::end;
    using std::ranges::cbegin;
    using std::ranges::cend;

    using std::ranges::empty_view;
    using std::ranges::single_view;
    using std::ranges::iota_view;
    using std::ranges::basic_istream_view;

    using std::ranges::take_view;
}

export namespace std::ranges::views
{
    using std::ranges::views::empty;
    using std::ranges::views::single;
    using std::ranges::views::iota;
    using std::ranges::views::istream;
    
    using std::ranges::views::take;
}

namespace std
{
  export namespace views = ranges::views;
}