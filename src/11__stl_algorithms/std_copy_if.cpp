// File: std_copy_if.cpp
// Description: This C++ program demonstrates the usage of the std::copy_if algorithm from the C++ Standard Library.
//              The std::copy_if algorithm is used to copy elements from one range to another, but only those elements
//              that satisfy a specified condition.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> source = {1, 2, 3, 4, 5};

    // Create another vector to copy selected elements from the source vector
    std::vector<int> destination;

    // Use std::copy_if to copy even elements from the source vector to the destination vector
    std::copy_if(source.begin(), source.end(), std::back_inserter(destination), [](int num)
                 { return num % 2 == 0; });

    // Print the original vector
    std::cout << "Source vector: ";
    for (const auto &num : source)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the copied vector containing even elements
    std::cout << "Copied vector (even elements): ";
    for (const auto &num : destination)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
