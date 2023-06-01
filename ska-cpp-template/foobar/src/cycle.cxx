export module foobar.cycle;

import stdcxx;

export import :A;
export import :B;

std::string cycleA::concat_names(cycleB& b)
{
    return name() + b.name();
}

std::string cycleB::concat_names(cycleA& a)
{
    return name() + a.name();
}
