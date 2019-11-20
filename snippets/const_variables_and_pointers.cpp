#include "testinc.hpp"

int main()
{
    // Similar
    int const a = 1;
    const int b = 1;

    // constant pointer to int variable
    int intVar = 0;
    int *const p1 = &intVar;

    // Const pointers
    const int constInt = 0;
    int const* p2 = &constInt;    // pointer to constant int
    const int* p3 = &constInt;    // pointer to constant int

    return 0;
}

