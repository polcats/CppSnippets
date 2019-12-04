#include "inc.hpp"

template <typename Param>
struct Parent
{
    Param member;
};

struct Child : Parent<bool>, Parent<uint8_t>
{
    void action()
    {
        Parent<bool>::member = true;
        Parent<uint8_t>::member = 2;
        member = 1; // ambiguous
    }
};

int main()
{
    Child c;

    return 0;
}
