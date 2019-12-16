/**
 * @file my_array.cpp
 * @author Michael Newman (you@domain.com)
 * @brief Learn about C-Style arrays
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <iomanip> // for formatted output
#include <cmath>
using namespace std;

const int kMaxNum =5;

int main()
{
    // C-Style
    // Array notation: type name[elements];
    // To access elements, use Index notation: begins at 0
    int grades[kMaxNum] = {83, 85, 87, 89, 90}; // an array of 5 integers
    float average = 0;
    int sum = 0;
    int row, column;
    cout << "Enter your exam grades" << endl;
    for(int num = 0; num < kMaxNum; ++num)
    {
         cout << grades[num] << endl;
        // cout << "Enter " << num + 1 << " grade: " << endl;
        // cin >> grades[num]; // access each element using []
        //average = average + grades[num];
        average += grades[num];
        sum += grades[num];
    }
    average = average/kMaxNum;
    cout << "Your average is: " << average << endl;
    // Cast or change varilable type from integer to float to preserve fraction
    // static_cast<type>(variable)
    average = static_cast<float>(sum)/kMaxNum;
    cout << "Your average is: " << average << endl;

// 2D Arrays: type name[row][col]
    int bi_array[3][5] = {{2, 4, 6, 11, 67}, {4, 5, 22, 33, 99}, {89, 33, 22, 11, 0}};
    // Print each element in the array
    for(int row = 0; row < 3; ++row)
    {
        for(int column = 0; column < 3; ++column)
        {
            cout << "Array element at [" << row << "]" << "[" << column << "] = " << bi_array[row][column] << endl;
        }
    }
    return 0;
}