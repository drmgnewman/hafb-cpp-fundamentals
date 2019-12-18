#include <iostream>
#include "height.h"
#include "counter.h"

int main()
{
    //Height h1;
    //h1.set_inches(83);
    //print_feet(h1); 
    //print_feet2(h1); 

    Counter c1, c2;
    std::cout << "\nCounter 1: " << c1.count() << std::endl;
    std::cout << "Counter 2: " << c2.count() << std::endl;
    ++c1;
    ++c2;
    ++c2;
    ++c2;
    std::cout << "\nCounter 1: " << c1.count() << std::endl;
    std::cout << "Counter 2: " << c2.count() << std::endl;
    c1 = ++c2;
    std::cout << "\nCounter 1: " << c1.count() << std::endl;
    std::cout << "Counter 2: " << c2.count() << std::endl;
    return 0;
}