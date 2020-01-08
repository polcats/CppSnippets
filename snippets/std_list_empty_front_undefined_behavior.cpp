#include "inc.hpp"

struct AA
{
    int member {1};
};

int main()
{
    std::list<AA> nums{};
    // nums.push_back(AA());

    std::shared_ptr<AA> test {nullptr};

    // with check
    // if (nums.size())
    // {
    //     test = std::make_shared<AA>(nums.front());
    //     nums.pop_front();
    // }

    // without check
    test = std::make_shared<AA>(nums.front());

    if (test)
    {
        std::cout << "has content." << " = " << test->member;
    }
    else
    {
        std::cout << "empty!";
    }
}
