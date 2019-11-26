#include "testinc.hpp"

struct coord
{
	coord(uint8_t p) : x(p){}
    uint8_t x{};
};

int main()
{
    std::array<std::shared_ptr<coord>, 2> coords {};
    coords.at(0) = std::make_shared<coord>(1);
    coords.at(1) = std::make_shared<coord>(2);

    for (auto i = 0u; i < coords.size(); ++i)
    {
        std::cout << "\n coord "<< i << " address " << coords.at(i).get();
        std::cout << " x : " << (int) coords.at(i)->x;
    }

    std::swap(coords.at(0), coords.at(1));
    std::cout << "\n";

    for (auto i = 0u; i < coords.size(); ++i)
    {
        std::cout << "\n coord "<< i << " address " << coords.at(i).get();
        std::cout << " x : " << (int) coords.at(i)->x;
    }
}
