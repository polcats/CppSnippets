#include "testinc.hpp"

void Fun()
{
    std::cout << "Hello World!";
}

int main()
{
    void(*firstPointer)() = Fun;
    firstPointer();

    auto secondPointer = Fun;
    secondPointer();

    typedef void(*zawarudo)();

    zawarudo thirdPointer = Fun;
    thirdPointer();

    return 0;
}

