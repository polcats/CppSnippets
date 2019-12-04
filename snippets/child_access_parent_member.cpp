#include "inc.hpp"

struct ParentA
{
    uint8_t member;
};
struct ParentB
{
    uint8_t member;
};


struct Child : ParentA, ParentB
{
    void action()
    {
        ParentA::member = 1;
        ParentB::member = 2;
        member = 0; // ambiguous
    }
};

int main()
{
    Child c;

    return 0;
}
