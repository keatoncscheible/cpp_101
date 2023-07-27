// File: std_copy_backward.cpp
// Description: This C++ program demonstrates the usage of the std::copy_backward algorithm from the C++ Standard Library.
//              The std::copy_backward algorithm is used to copy a range of elements from one container to another in
//              reverse order, avoiding any overlap in the destination range.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> source = {1, 2, 3, 4, 5};

    // Create another vector to copy the elements from the source vector in reverse order
    std::vector<int> destination(source.size());

    // Use std::copy_backward to copy the elements from the source vector to the destination vector in reverse order
    std::copy_backward(source.begin(), source.end(), destination.end());

    // Print the original vector
    std::cout << "Source vector: ";
    for (const auto &num : source)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the copied vector with elements in reverse order
    std::cout << "Copied vector (in reverse order): ";
    for (const auto &num : destination)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
