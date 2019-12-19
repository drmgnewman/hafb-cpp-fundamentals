#include <iostream>
#include "distance.h"
using namespace std;

// Main Function
int main() 
{
  Distance d1(34, 9.5);
  d1.ShowDist();
  Distance d2(10, 8.5);
  d2.ShowDist();
  Distance d3(45, 6);
  d3.ShowDist();
  Distance d4;
  // add three objects
  d4 = d1 + d2 + d3;
  d4.ShowDist();

  // Display info with stdout
  std::cout << d4 << std::endl;

  Distance d5;
  // subtract tow objects
  d5 = d2 - d1;
  d5.ShowDist();


  return 0;
}