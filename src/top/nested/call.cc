/// System Includes
#include <iostream>
#include <string>

/// Local Includes
#include "top/nested/call.h"
#include "top/nested/call_impl.h"

namespace top {
namespace nested {

call::call_impl::call_impl() {
  std::cout << "The derived(virtual) constructor for a call" << std::endl;
}

call::call_impl::~call_impl() {
  std::cout << "The derived(virtual) destructor for a call" << std::endl;
}

std::string call::call_impl::greeting() {
  return std::string("I am calling hello");
}

call::call()
 : impl(std::make_unique<call_impl>())
{
}

call::~call() = default;

std::string call::greeting()
{
  return impl->greeting();
}


} // namespace nested
} // namespace top
