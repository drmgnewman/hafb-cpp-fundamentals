#include "my_functions.h"
#include <iostream>
#include<array>


using namespace std;

// Function Definition
int Sum(int num1, int num2) // pass both parameters by value (make your own copy)
{
  return num1 + num2;
}

/**
 * @brief Increments the value of step by 1
 * 
 * @param step : current step value
 */
void UpdateStep(int& step) // take the address of the parameter
{
    cout << "Current step: " << step << endl;
    // step++;
    // step = step + 1;
    step += 1;
    cout << "New step: " << step << endl;
}

array<int, 10> temperatures = {-12, 34, 67, 0, 12, 44, 99, -8, 18, 33};

int Max10(const std::array<int, 10>& nums)
{
    int max = nums[0]; // get the 
    for(auto num : nums)
    {
        if(max <= num)
        {
            max = num;
        }
    }
    return max;
}

void ClearElements(std::array<int, 10>& nums)
{
    for(int index = 0; index < nums.size(); ++index)
    {
        nums[index] = -99; // set value to -99
    }
} 