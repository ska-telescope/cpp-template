#ifndef TOP_NESTED_WAVE_IMPL_H
#define TOP_NESTED_WAVE_IMPL_H

#include <string>

#include "top/nested/wave.h"

namespace top {
namespace nested {

class wave::wave_impl {
public:
  wave_impl();
  ~wave_impl();
  std::string greeting();
};
} // namespace nested
} // namespace top

#endif // TOP_NESTED_WAVE_IMPL_H
