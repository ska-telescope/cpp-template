/// System Includes
#include <iostream>
/// Local Includes
#include "ska/nested/hello.h"
namespace ska {
namespace nested {
hello::hello() {
  std::cout << "The default constructor for a hello" << std::endl;
}
hello::~hello() {
  std::cout << "The default destructor for a hello" << std::endl;
}
} // namespace nested
} // namespace ska
