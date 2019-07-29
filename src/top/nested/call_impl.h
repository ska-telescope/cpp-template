#ifndef TOP_NESTED_WAVE_IMPL_H
#define TOP_NESTED_WAVE_IMPL_H

#include <string>

#include "top/nested/call.h"

namespace top {
namespace nested {

class call::call_impl {
public:
  call_impl();
  ~call_impl();
  std::string greeting();
};
} // namespace nested
} // namespace top

#endif // TOP_NESTED_CALL_IMPL_H
