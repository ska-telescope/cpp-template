#ifndef SKA_NESTED_HELLO_H
#define SKA_NESTED_HELLO_H
#include <string>

namespace ska {
namespace nested {

class hello {

  public:
    hello();
    ~hello();

    virtual std::string greeting() = 0;

};
} // namespace nested
} // namespace ska
#endif

