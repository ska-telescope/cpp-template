export module foobar.bar;

import fmt.core;
import stdcxx;

export class bar
{
private:
  std::shared_ptr<int> value = std::make_shared<int>(1);
public:
  bar() = default;
  ~bar() = default;

  std::string name() const { return "bar"; } const

  int get() const
  {
    return *value;
  }

  std::shared_ptr<int> get_ptr()
  {
    return value;
  }
};
