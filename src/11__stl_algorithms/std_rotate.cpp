// File: std_rotate.cpp
// Description: This C++ program demonstrates the usage of the std::rotate algorithm from the C++ Standard Library.
//              The std::rotate algorithm is used to rotate the elements in a range such that a specified element
//              becomes the new first element.

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

    // Use std::rotate to rotate the elements such that '3' becomes the new first element
    std::rotate(numbers.begin(), std::find(numbers.begin(), numbers.end(), 3), numbers.end());

    // Print the vector after rotation
    std::cout << "Vector after rotation: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
