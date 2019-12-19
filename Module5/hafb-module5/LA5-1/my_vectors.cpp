#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    std::vector<int> vec;
    // Add elements
    vec.push_back(100); // both, front() and back() contain the 100 value
    vec.push_back(200); // front = 100 and back = 200
    std::cout << "Front of the vector: " << vec.front() << std::endl;
    std::cout << "Back of the vector: " << vec.back() << std::endl;
    vec.push_back(300);
    // Iterate over the vector
    std::cout << "Using index notation" << std::endl;
    for(size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << std::endl;
    }
    std::cout << "Using an iterator" << std::endl;
    for(auto it = std::begin(vec); it != std::end(vec); ++it)
    {
        std::cout << *it << std::endl; // de-reference "it" to get the value "it" points to
    }

    std::cout << "Range based for loop" << std::endl;
    for(const auto& value: vec)
    {
        std::cout << value << std::endl;
    }

    // Define and initialize a vector. Use {} with comma separated values
    int max = 5;
    //std::vector<int> vec2 = {-1, -1, -1, -1, -1};
    std::vector<int> vec2(max, -1); // use vector constructor
    for(int x : vec2)
    {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}