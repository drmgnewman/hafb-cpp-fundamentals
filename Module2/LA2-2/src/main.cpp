#include <array>    // for array containers
#include <iostream> // basic I/O
#include <string>   // strings
#include <fstream>  // file stream

using namespace std;

/**
 * @brief Shows how to define and use an ifstream object to read from a file.
 *
 * We will define ifstream objects and then see some operators
 * and methods that work with these objects.
 *
 * @return int 0 means function exited with success
 */

const int kMaxSize = 24;

int main() {
  // create an ojbect of type ifstream
  std::ifstream in; // inputFileStream

  // open the file age.txt
  in.open("../age.txt"); // relative path from the executable
  if(in.fail())
  {
    std::cout << "Unable to open file age.txt.\nShutting down\n";
    return 1;
  }
  
  // read from the age file and store values in an array
  std::array<int, kMaxSize> ages;
  ages.fill(-1); // initialize elements to -1
  int age_size = 0;
  //in >> ages[age_size];
  //age_size++;
  //in >> ages[age_size++];
  //in >> ages[age_size++];
 
  // read to the end of the file
  while(age_size < kMaxSize && in >> ages[age_size])
  {
    age_size++;
  }

  // print out the values in the array
  for(auto age: ages)
  {
    std::cout << age << std::endl;
  }
  // close input file
  in.close();


  // print out the valid values in the array


  // print out the all the values in the array


  // Define an ifstream object and open the file name.txt
  std::ifstream infile; // inputFileStream
  infile.open("../name.txt"); // relative path from the executable
  if(infile.fail())
  {
    std::cout << "Unable to open file name.txt.\nShutting down\n";
    return 1;
  }

  // read one name, store it in the array, and print it
  std::array<std::string, kMaxSize> names;
  names.fill("-");
  int name_size = 0; // array index
  
  // read the rest of the names in the file
  while(name_size < kMaxSize && std::getline(infile, names[name_size]))
  {
    name_size++;
  }
  
  // print valid elements in the names array
  for(auto name : names)
  {
    std::cout << name << std::endl;
  }
  infile.close();
  
  // print all the elements in the names array

  // Use a file with mixed values
  
  // Define an ifstream object and open the file name_age.txt
  std::ifstream in_name_age; // inputFileStream
  in_name_age.open("../name_age.txt"); // relative path from the executable
  if(in_name_age.fail())
  {
    std::cout << "Unable to open file name_age.txt.\nShutting down\n";
    return 1;
  }


  // reset age and name arrays
  ages.fill(-1); // initialize elements to -1
  names.fill("-");
  int index = 0;


  // read all the values from the name_age.txt file
  while(index < kMaxSize && in_name_age >> ages[index])
  {
    // need load the next record or any extra characters?
    in_name_age.ignore();
    std::getline(in_name_age, names[index]);
    index++; // increment index
  }

  // print valid elements in the names and ages array
  for(int num = 0; num < index; ++num)
  {
    std::cout << "Age: " << ages[num] << " for name " << names[num] << std::endl;
  }


  // print all elements in the names and ages array

  return 0;
}
