// File: std_fill.cpp
// Description: This C++ program demonstrates the usage of the std::fill algorithm from the C++ Standard Library.
//              The std::fill algorithm is used to set all elements in a range to a given value.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Use std::fill to set all elements of the vector to the value 10
    std::fill(numbers.begin(), numbers.end(), 10);

    // Print the vector after filling it with the value 10
    std::cout << "Vector after filling with 10: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
