module;
#include <regex>
export module stdcxx:regex;

//initializer_list
export namespace std {
    using std::initializer_list;
}

//compare
export namespace std {
    using std::three_way_comparable;
    using std::three_way_comparable_with;

    using std::partial_ordering;
    using std::weak_ordering;
    using std::strong_ordering;
    using std::common_comparison_category;
    using std::compare_three_way_result;
    using std::compare_three_way;

    using std::strong_order;
    using std::weak_order;
    using std::partial_order;
    using std::compare_strong_order_fallback;
    using std::compare_weak_order_fallback;
    using std::compare_partial_order_fallback;

    using std::is_eq;
    using std::is_neq;
    using std::is_lt;
    using std::is_lteq;
    using std::is_gt;
    using std::is_gteq;
}

export namespace std {
    using std::basic_regex;
    using std::regex;
    using std::wregex;
    using std::sub_match;
    using std::csub_match;
    using std::wcsub_match;
    using std::ssub_match;
    using std::wssub_match;
    using std::match_results;
    using std::cmatch;
    using std::wcmatch;
    using std::smatch;
    using std::wsmatch;
    using std::regex_iterator;
    using std::cregex_iterator;
    using std::wcregex_iterator;
    using std::sregex_iterator;
    using std::wsregex_iterator;
    using std::regex_token_iterator;
    using std::cregex_token_iterator;
    using std::wcregex_token_iterator;
    using std::sregex_token_iterator;
    using std::wsregex_token_iterator;
    using std::regex_error;
    using std::regex_traits;

    using std::regex_match;
    using std::regex_search;
    using std::regex_replace;
};

export namespace std::regex_constants {
    using std::regex_constants::syntax_option_type;
    using std::regex_constants::match_flag_type;
    using std::regex_constants::error_type;
};
