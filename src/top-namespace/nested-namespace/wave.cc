/// System Includes
#include <iostream>
/// Local Includes
#include "top-namespace/nested-namespace/hello.h"
#include "top-namespace/nested-namespace/wave.h"

wave::wave() {
  std::cout << "The derived(virtual) constructor for a wave" << std::endl;
}  
wave::~wave() {
  std::cout << "The derived(virtual) destructor for a wave" << std::endl;
}
wave::greeting {
  std::cout << "I am waving hello" << std::endl;
}  

