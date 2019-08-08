/// System Includes
#include <iostream>
#include <string>

/// Local Includes
#include "ska/nested/wave.h"
#include "ska/nested/wave_impl.h"

namespace ska {
namespace nested {

wave::wave_impl::wave_impl() {
  std::cout << "The derived(virtual) constructor for a wave" << std::endl;
}

wave::wave_impl::~wave_impl() {
  std::cout << "The derived(virtual) destructor for a wave" << std::endl;
}

std::string wave::wave_impl::greeting() {
  return std::string("I am waving hello");
}

wave::wave()
 : impl(std::make_unique<wave_impl>())
{
}

wave::~wave() = default;

std::string wave::greeting()
{
  return impl->greeting();
}


} // namespace nested
} // namespace ska
