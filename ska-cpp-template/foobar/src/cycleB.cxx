export module foobar.cycle:B;

import stdcxx;

class cycleA;
export class cycleB {
public:
    std::string name() const { return "cycleB"; }
    std::string concat_names(cycleA& a);
};
