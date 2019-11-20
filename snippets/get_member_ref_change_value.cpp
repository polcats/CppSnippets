#include "testinc.hpp"

class B
{
public:
    B() = default;

    int member = 0;

};

class A {
public:
    A() = default;

    B& GetB()
    {
        return b;
    }

    B b;
};


int main()
{

    A a;
    a.GetB().member = 1;

    return 0;
}

