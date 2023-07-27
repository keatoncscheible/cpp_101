// File: std_copy.cpp
// Description: This C++ program demonstrates the usage of the std::copy algorithm from the C++ Standard Library.
//              The std::copy algorithm is used to copy elements from one range to another.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> source = {1, 2, 3, 4, 5};

    // Create another vector to copy elements from the source vector
    std::vector<int> destination(source.size());

    // Use std::copy to copy elements from the source vector to the destination vector
    std::copy(source.begin(), source.end(), destination.begin());

    // Print the original vector
    std::cout << "Source vector: ";
    for (const auto &num : source)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the copied vector
    std::cout << "Copied vector: ";
    for (const auto &num : destination)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
