// File: std_inplace_merge.cpp
// Description: This C++ program demonstrates the usage of the std::inplace_merge algorithm from the C++ Standard Library.
//              The std::inplace_merge algorithm is used to merge two consecutive sorted ranges within a container in-place.
//              In this example, we create a sorted vector of integers and then use std::inplace_merge to merge two consecutive
//              sub-ranges within the vector to form a single sorted range.
//              The input vector must have at least two consecutive sorted sub-ranges.
//              The std::inplace_merge function takes three iterators: first, middle, and last, representing the two sub-ranges
//              to be merged. It merges the two ranges in such a way that the resulting range is also sorted.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a sorted vector of integers
    std::vector<int> numbers = {1, 3, 5, 7, 2, 4, 6, 8};

    // Print the original vector
    std::cout << "Original vector elements: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Find the middle iterator to identify the two sub-ranges
    auto middle = numbers.begin() + numbers.size() / 2;

    // Merge the two consecutive sorted sub-ranges using std::inplace_merge
    std::inplace_merge(numbers.begin(), middle, numbers.end());

    // Print the vector after inplace_merge
    std::cout << "Vector elements after inplace_merge: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
