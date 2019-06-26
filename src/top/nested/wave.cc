/// System Includes
#include <iostream>
/// Local Includes
#include "top/nested/hello.h"
#include "top/nested/wave.h"

namespace top {
namespace nested {
wave::wave() {
  std::cout << "The derived(virtual) constructor for a wave" << std::endl;
}  
wave::~wave() {
  std::cout << "The derived(virtual) destructor for a wave" << std::endl;
}
void wave::greeting() {
  std::cout << "I am waving hello" << std::endl;
}
} // namespace nested
} // namespace top
