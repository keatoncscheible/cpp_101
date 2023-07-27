// File: std_mismatch.cpp
// Description: This C++ program demonstrates the usage of the std::mismatch algorithm from the C++ Standard Library.
//              The std::mismatch algorithm finds the first position where two ranges differ.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create two vectors of integers
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {1, 2, 6, 4, 5};

    // Find the first position where the vectors differ using std::mismatch
    auto result = std::mismatch(vec1.begin(), vec1.end(), vec2.begin());

    // Print the original vectors
    std::cout << "Vector 1: ";
    for (const auto &num : vec1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Vector 2: ";
    for (const auto &num : vec2)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if mismatch was found
    if (result.first == vec1.end() && result.second == vec2.end())
    {
        std::cout << "Both vectors are equal." << std::endl;
    }
    else
    {
        std::cout << "Mismatch found at position: " << (result.first - vec1.begin()) << std::endl;
        std::cout << "Vector 1 element at mismatch position: " << *result.first << std::endl;
        std::cout << "Vector 2 element at mismatch position: " << *result.second << std::endl;
    }

    return 0;
}
