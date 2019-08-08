#ifndef SKA_NESTED_WAVE_H
#define SKA_NESTED_WAVE_H

#include <memory>
#include <string>

#include "ska/nested/hello.h"

namespace ska {
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
} // namespace ska

#endif // SKA_NESTED_WAVE_H
