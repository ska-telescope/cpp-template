module;
#include <type_traits>
export module stdcxx:type_traits;
export namespace std {
    //Helper Classes
    using std::integral_constant;
    using std::bool_constant;
    using std::true_type;
    using std::false_type;

    //Primary type categories
    using std::is_void;
    using std::is_null_pointer;
    using std::is_integral;
    using std::is_floating_point;
    using std::is_array;
    using std::is_enum;
    using std::is_union;
    using std::is_class;
    using std::is_function;
    using std::is_pointer;
    using std::is_lvalue_reference;
    using std::is_rvalue_reference;
    using std::is_member_object_pointer;
    using std::is_member_function_pointer;

    //Composite type categories
    using std::is_fundamental;
    using std::is_arithmetic;
    using std::is_scalar;
    using std::is_object;
    using std::is_compound;
    using std::is_reference;
    using std::is_member_pointer;

    //Type properties
    using std::is_const;
    using std::is_volatile;
    using std::is_trivial;
    using std::is_trivially_copyable;
    using std::is_standard_layout;
    using std::is_pod;
    using std::has_unique_object_representations;
    using std::is_empty;
    using std::is_polymorphic;
    using std::is_abstract;
    using std::is_final;
    using std::is_aggregate;
    // using std::is_implicit_lifetime;
    using std::is_signed;
    using std::is_unsigned;
    using std::is_bounded_array;
    using std::is_unbounded_array;
    // using std::is_scoped_enum;

    //Supported operations
    using std::is_constructible;
    using std::is_trivially_constructible;
    using std::is_nothrow_constructible;
    using std::is_default_constructible;
    using std::is_trivially_default_constructible;
    using std::is_nothrow_default_constructible;
    using std::is_copy_constructible;
    using std::is_trivially_copy_constructible;
    using std::is_nothrow_copy_constructible;
    using std::is_move_constructible;
    using std::is_trivially_move_constructible;
    using std::is_nothrow_move_constructible;
    using std::is_assignable;
    using std::is_trivially_assignable;
    using std::is_nothrow_assignable;
    using std::is_copy_assignable;
    using std::is_trivially_copy_assignable;
    using std::is_nothrow_copy_assignable;
    using std::is_move_assignable;
    using std::is_trivially_move_assignable;
    using std::is_nothrow_move_assignable;
    using std::is_destructible;
    using std::is_trivially_destructible;
    using std::is_nothrow_destructible;
    using std::has_virtual_destructor;
    using std::is_swappable_with;
    using std::is_swappable;
    using std::is_nothrow_swappable_with;
    using std::is_nothrow_swappable;

    //Property queries
    using std::alignment_of;
    using std::rank;
    using std::extent;

    //Type relationships
    using std::is_same;
    using std::is_base_of;
    using std::is_convertible;
    using std::is_nothrow_convertible;
    // using std::is_layout_compatible;
    // using std::is_pointer_interconvertible_base_of;
    using std::is_invocable;
    using std::is_invocable_r;
    using std::is_nothrow_invocable;
    using std::is_nothrow_invocable_r;

    //Const-volatility specifiers
    using std::remove_cv;
    using std::remove_const;
    using std::remove_volatile;
    using std::add_cv;
    using std::add_const;
    using std::add_volatile;

    // References
    using std::remove_reference;
    using std::add_lvalue_reference;
    using std::add_rvalue_reference;

    //Pointers
    using std::remove_pointer;
    using std::add_pointer;

    //Sign modifiers
    using std::make_signed;
    using std::make_unsigned;

    //Arrays
    using std::remove_extent;
    using std::remove_all_extents;

    //Miscellaneous transformations
    // using std::aligned_storage;
    // using std::aligned_union;
    using std::decay;
    using std::remove_cvref;
    using std::enable_if;
    using std::conditional;
    using std::common_type;
    using std::common_reference;
    using std::basic_common_reference;
    using std::underlying_type;
    using std::invoke_result;
    using std::void_t;
    using std::type_identity;

    //Operations on traits
    using std::conjunction;
    using std::disjunction;
    using std::negation;

    //Functions
    //Member relationships
    // using std::is_pointer_interconvertible_with_class;
    // using std::is_corresponding_member;

    //Constant evaluation context
    using std::is_constant_evaluated;
}
