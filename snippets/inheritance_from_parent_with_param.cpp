#include "testinc.hpp"

#include <stdio.h>
#include <memory>
#include <vector>
#include <iostream>


struct A
{
    A(bool a)
    {
    }
};

struct B : A
{
    B(bool isAmf): A(isAmf)
    {

    }
};

struct C : B
{
    C(bool isAmf = false) : B(isAmf){}
};


int main()
{
    C c();

    return 0;
}
