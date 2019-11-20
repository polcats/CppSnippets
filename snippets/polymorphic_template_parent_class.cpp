#include "testinc.hpp"

struct ParentClassA;
struct ParentClassB;
template <class Parent>
struct Common;

typedef Common<ParentClassA> ParentClassA_t;
typedef Common<ParentClassB> ParentClassB_t;

struct ParentClassA
{
    ParentClassA() = default;
    uint8_t a{};
    uint8_t b{};
};

struct ParentClassB
{
    ParentClassB() = default;
    uint8_t a{};
    uint8_t b{};
};

template <class Parent>
struct Common : public Parent
{
    Common() = default;
    uint8_t x{8};
    uint8_t y{9};
};

typedef Common<ParentClassA> ParentClassA_t;
typedef Common<ParentClassB> ParentClassB_t;

void TestFun(ParentClassA p)
{
    std::cout << "\nParentClassA : " << (int)p.a << " " << (int)p.b;
}

void TestFun(ParentClassB p)
{
    std::cout << "\nParentClassB : " << (int)p.a << " " << (int)p.b;
}

int main()
{
    ParentClassA_t test;
    test.a = 2;
    test.b = 4;

    ParentClassB_t test2;
    test2.a = 1;
    test2.b = 3;

    TestFun(test);
    TestFun(test2);

    return 0;
}
