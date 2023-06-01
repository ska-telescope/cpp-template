module;
#include <functional>
export module stdcxx:functional;
export namespace std {
    using std::function;
    // using std::move_only_function;
    using std::mem_fn;
    using std::reference_wrapper;
    using std::unwrap_reference;
    using std::unwrap_ref_decay;

    using std::invoke;
    using std::bind;
    
    using std::ref;
    using std::cref;


    using std::operator==;
}

// FIXME: We couldn't export noninline-const variables.
namespace std::placeholders {
    export inline constexpr decltype(std::placeholders::_1) _1_placeholder = std::placeholders::_1;
    export inline constexpr decltype(std::placeholders::_2) _2_placeholder = std::placeholders::_2;
    export inline constexpr decltype(std::placeholders::_3) _3_placeholder = std::placeholders::_3;
}
