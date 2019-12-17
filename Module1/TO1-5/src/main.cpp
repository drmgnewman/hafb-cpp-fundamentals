#include <iostream>
#include "cars.h"
// using namespace std;
//using namespace lamborghini;
//using namespace porsche;


int main() 
{
    std::cout << "The lamborghini's horse power: " << lamborghini::HorsePower() << std::endl;
    std::cout << "The porsche's horse power: " << porsche::HorsePower() << std::endl;
    // :: this is the "No Name" namespace
    std::cout << "A regular car's horse power: " << ::HorsePower() << std::endl;
    lamborghini::cout();
    return 0;
}
