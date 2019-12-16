/**
 * @file case.cpp
 * @author Michael Newman (michaelnewman1@weber.edu)
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
using namespace std;

int main()
{
    char code;
    cout << "Enter the specification code: ";
    cin >> code;

    // ==  operator to compare values
    // when comparing characters use single ticks ' '
    // if(code == 'S')
    // {
    //     cout << "The item is space exploration grade." << endl;
    // }

    // Use a switch statement
    switch (code)
    {
    case 'S': // like an IF statement with OR case (||)
    case 's': // like an IF statement
        cout << "The item is space exploration grade." << endl;
        break; // exit your switch statement
    case 'M':
        cout << "The item is military exploration grade." << endl;
        break;
    case 'C':
        cout << "The item is commercial grade." << endl;
        break;
    case 'T':
        cout << "The item is Toy grade." << endl;
        break;

    default: // like an ELSE statement
        cout << "The item not supported." << endl;
        break;
    }
    return 0;
}