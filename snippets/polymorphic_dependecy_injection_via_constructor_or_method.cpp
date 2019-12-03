#include "testinc.hpp"

// Base light bulb
class LightBulb
{
};

// Child class
class LightBulbBrandA : public LightBulb
{
};

class LightBulbBrandB : public LightBulb
{
};

class Lamp
{
public:
    Lamp(LightBulb bulb) :lightBulb(bulb) {};

    void setBulb(LightBulb bulb)
    {
        lightBulb = bulb;
    }

private:
    LightBulb lightBulb;
};

int main()
{

    LightBulbBrandA bulbA;
    LightBulbBrandB bulbB;

    Lamp lamp(bulbA); // constructor injection
    lamp.setBulb(bulbB); // method injection


    return 0;
}

