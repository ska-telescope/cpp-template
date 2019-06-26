#ifndef TOP_NESTED_WAVE_H
#define TOP_NESTED_WAVE_H

// include the header instead of the forward declaration ?
//
#include "top/nested/hello.h" 

namespace top {
namespace nested {

class wave : hello {
  public:
  wave();
  ~wave();

  virtual void greeting();
};
} // nested
} // top

#endif

