#ifndef SKA_NESTED_WAVE_IMPL_H
#define SKA_NESTED_WAVE_IMPL_H

#include <string>

#include "ska/nested/wave.h"

namespace ska {
namespace nested {

class wave::wave_impl {
public:
  wave_impl();
  ~wave_impl();
  std::string greeting();
};
} // namespace nested
} // namespace ska

#endif // SKA_NESTED_WAVE_IMPL_H
