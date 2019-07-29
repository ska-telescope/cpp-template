#ifndef TOP_NESTED_WAVE_H
#define TOP_NESTED_WAVE_H

#include <memory>
#include <string>

#include "top/nested/hello.h"

namespace top {
namespace nested {

/// A wave class implemented with a Pimpl idiom
class call : public hello {
public:
  call();
  ~call();
  std::string greeting() override;

private:
  class call_impl;
  std::unique_ptr<call_impl> impl;
};

} // namespace nested
} // namespace top

#endif // TOP_NESTED_CALL_H
