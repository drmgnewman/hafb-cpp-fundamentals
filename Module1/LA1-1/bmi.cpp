#include <iostream>
using namespace std;

int main()
{
    // Calculate BMI: weight(kg)/[height(m)]^2
    // Floating point variables: float, double
    float weight = 0, height = 0, bmi = 0;
    cout << "Welcome to BMI Program!" << endl;
    cout << "Enter your weight in kg: " << endl;
    cin >> weight;
    cout << "Enter your height in meters: " << endl;
    cin >> height;
    // calculate bmi
    bmi = weight/height/height;
    cout << "Your BMI is: " << "BMI = " << bmi << endl;
    return 0;
}