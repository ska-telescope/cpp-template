#ifndef TOP_NESTED_HELLO_H
#define TOP_NESTED_HELLO_H
#include <string>

namespace top {
namespace nested {

class hello {

  public:
    hello();
    ~hello();

    virtual std::string greeting() = 0;

};
} // namespace nested
} // namespace top
#endif

