#include <iostream>
#include <array>
#include "carton.h"

//using namespace std;

const int kMaxSize = 10;

int main()
 {

  // create a Carton object using the default constructor
   Carton box;

   box.ShowInfo();
   box.set_length(10.9);
   box.set_width(23.0);
   box.set_height(12.5);
   box.ShowInfo();



  // create a Carton object using the other constructor
   Carton box2(34,89,11);
   box2.ShowInfo();

   Carton box3(2, 4, 8);

  // create an array of Cartons

   std::array<Carton, kMaxSize> boxes;
 
  // add some valid elements to the array
   boxes[0] = Carton(12, 41, 52);
   boxes[0].ShowInfo();

  // loop through the array
   std::cout << "\nPrinting Array: " << std::endl;
   for(auto box : boxes)
   {
     box.ShowInfo();
   }
  // print out the volume of packages

  // print out the girth of packages

  // print out the length plus girth of packages

  // check if package is sized to ship

  // define a package that is too big to ship

  // define a package that is too small to ship

  // print if sized to ship

  // write carton data and information

  // read data from file

  // write data to file

  return 0;
}