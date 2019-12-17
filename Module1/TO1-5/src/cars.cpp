#include <iostream>
#include "cars.h"
int HorsePower() // "no Name" namespace

{
    return 150;
}
// using namespace lamborghini;
int lamborghini::HorsePower()
{
    return 760;
}

void lamborghini::cout()
{
    std::cout << "My Car is a Lamborghini!" << std::endl;
}
// using namespace porsche;
int porsche::HorsePower()
{
    return 700;
}
