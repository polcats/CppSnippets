#include "snippets/testinc.hpp"

// Creates a data type "item"
struct item
{
    float weight;
};

// Instantiates an "item" struct for us in the current scope.
struct
{
    float weight;
} item;

int main()
{

    return 0;
}
