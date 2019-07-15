#ifndef TOP_NESTED_WAVE_H
#define TOP_NESTED_WAVE_H

#include <memory>
#include <string>

#include "top/nested/hello.h"

namespace top {
namespace nested {

/// A wave class implemented with a Pimpl idiom
class wave : public hello {
public:
  wave();
  ~wave();
  std::string greeting() override;

private:
  class wave_impl;
  std::unique_ptr<wave_impl> impl;
};

} // namespace nested
} // namespace top

#endif // TOP_NESTED_WAVE_H
