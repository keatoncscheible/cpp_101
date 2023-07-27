// File: std_set_symmetric_difference.cpp
// Description: This C++ program demonstrates the usage of the std::set_symmetric_difference algorithm from the C++ Standard Library.
//              The std::set_symmetric_difference algorithm is used to compute the symmetric difference between two sorted ranges.
//              In other words, it creates a new sorted range that contains elements that are present in either of the input ranges, but not in both.
//              Both input ranges must be sorted in ascending order, and the resulting range will also be sorted.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create two sorted vectors
    std::vector<int> set1 = {1, 3, 5, 7, 9};
    std::vector<int> set2 = {2, 4, 5, 8, 10};

    // Create a vector to store the result of set_symmetric_difference
    std::vector<int> symmetricDifference;

    // Use std::set_symmetric_difference to find the symmetric difference between set1 and set2
    std::set_symmetric_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(symmetricDifference));

    // Print the original sets
    std::cout << "Set 1: ";
    for (const auto &num : set1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Set 2: ";
    for (const auto &num : set2)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the symmetric difference
    std::cout << "Symmetric Difference: ";
    for (const auto &num : symmetricDifference)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
