// File: std_copy_n.cpp
// Description: This C++ program demonstrates the usage of the std::copy_n algorithm from the C++ Standard Library.
//              The std::copy_n algorithm is used to copy a specified number of elements from one range to another.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> source = {1, 2, 3, 4, 5};

    // Create another vector to copy the first three elements from the source vector
    std::vector<int> destination(3);

    // Use std::copy_n to copy the first three elements from the source vector to the destination vector
    std::copy_n(source.begin(), 3, destination.begin());

    // Print the original vector
    std::cout << "Source vector: ";
    for (const auto &num : source)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the copied vector containing the first three elements
    std::cout << "Copied vector (first three elements): ";
    for (const auto &num : destination)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
