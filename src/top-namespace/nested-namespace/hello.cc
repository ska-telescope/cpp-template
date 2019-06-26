/// System Includes
#include <iostream>
/// Local Includes
#include "top-namespace/nested-namespace/hello.h"

hello::hello() {
  std::cout << "The default constructor" << std::endl;
}
hello::~hello() {
  std::cout << "The default destructor" << std::endl;
}
