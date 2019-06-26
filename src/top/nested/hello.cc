/// System Includes
#include <iostream>
/// Local Includes
#include "top/nested/hello.h"
namespace top {
namespace nested {
hello::hello() {
  std::cout << "The default constructor for a hello" << std::endl;
}
hello::~hello() {
  std::cout << "The default destructor for a hello" << std::endl;
}
} // nested
} // top
