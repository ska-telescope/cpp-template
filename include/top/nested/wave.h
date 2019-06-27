#ifndef TOP_NESTED_WAVE_H
#define TOP_NESTED_WAVE_H

#include <string>
// include the header instead of the forward declaration ?
//
#include "top/nested/hello.h"

namespace top {
namespace nested {

class wave : public hello {
  public:
  wave();
  ~wave();

  std::string greeting() override;
};
} // namespace nested
} // namespace top

#endif

