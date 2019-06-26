#ifndef TOP_NESTED_HELLO_H
#define TOP_NESTED_HELLO_H

namespace top {
namespace nested {

class hello {

  public:	
    hello();
    ~hello();

    virtual void greeting() = 0;

};
} // namespace nested
} // namespace top
#endif

