#include "inc.hpp"

struct myStruct
{
    int member {1};
};

int main()
{
    std::list<myStruct> nums{};
    // nums.push_back(myStruct());

    std::shared_ptr<myStruct> test {nullptr};

    if (nums.size())
    {
        test = std::make_shared<myStruct>(nums.front());
        nums.pop_front();
    }

    if (test)
    {
        std::cout << "has content.";
    }
    else
    {
        std::cout << "empty!";
    }
}
