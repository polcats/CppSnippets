#include "snippets/testinc.hpp"

void TestFun(int a, int b)
{
}

template <typename A, typename B>
void TestFun(A, B) = delete;

// Now TestFun can only ever accept int, int

int main()
{

    return 0;
}
