#include <iostream>
#include "factor.h"
using namespace std;

int main()
{
    FactorMod3();
//    int x = 27;
//    FactorModX(x);
    FactorModX(3);
    FactorModX(5);
    FactorModXRange(3, 500);
    FactorModXRange(5, 500);
   return 0;
}