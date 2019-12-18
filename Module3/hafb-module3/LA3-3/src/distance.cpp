// countpp3.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
#include "distance.h"
using namespace std;

void Distance::ShowDist() const
{
    std::cout << feet() << "\'-" << inches() << "\"" << std::endl;
}
