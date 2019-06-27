/// System Includes
#include <iostream>
#include <string>
/// Local Includes
#include "top/nested/wave.h"

namespace top {
namespace nested {
wave::wave() {
  std::cout << "The derived(virtual) constructor for a wave" << std::endl;
}
wave::~wave() {
  std::cout << "The derived(virtual) destructor for a wave" << std::endl;
}
std::string wave::greeting() {
  return std::string("I am waving hello");
}
} // namespace nested
} // namespace top
