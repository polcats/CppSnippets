#include "testinc.hpp"

int main()
{
    int* tes = nullptr;
    int*& k = tes; // Reference to a pointer
    if (k == nullptr)
    {
       std::cout << (k == nullptr);
    }

    return 0;
}

