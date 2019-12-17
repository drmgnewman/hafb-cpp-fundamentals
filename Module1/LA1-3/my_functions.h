# pragma once
#include <array>

// prototype

int Sum(int num1, int num2);

/**
 * @brief Increments the value of step by 1
 * 
 * @param step : current step value
 */
void UpdateStep(int& step);

int Max2(int num1, int num2);
int Max3(int num1, int num2, int num3);
int Max10(const std::array<int, 10>& nums);

void ClearElements(std::array<int, 10>& nums);
