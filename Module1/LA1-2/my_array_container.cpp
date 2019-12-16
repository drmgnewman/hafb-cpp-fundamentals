/**
 * @file my_array_container.cpp
 * @author Michael Newman (michaelnewman1@weber.edu)
 * @brief Learn about C++-Style arrays
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
//#include <iomanip> // for formatted output
#include <cmath>
#include <array> // array container
using namespace std;

const int kMaxNum =5;

int main()
{
    // To create arrays with library:
    // array<type, numOfElements> name;
    array<double, 5> grades {22.1, 6.9, 11.2, 99, 44.3};
    cout << "Size of array: " << grades.size() << endl;
    cout << "Array Empty?: " << grades.empty() << endl;
    for(int index = 0; index < grades.size(); ++index)
    {
        cout << grades[index] << endl;
    }
    // For each loop
    cout << "For each: " << endl;
    for(auto grade : grades)
    {
        cout << grade << endl;
    }
    return 0;
}