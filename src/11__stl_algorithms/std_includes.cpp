// File: std_includes.cpp
// Description: This C++ program demonstrates the usage of the std::includes algorithm from the C++ Standard Library.
//              The std::includes algorithm is used to check if one sorted range is a subset of another sorted range.
//              In this example, we have two sorted vectors, and we use std::includes to check if the first vector is a subset
//              of the second vector.
//              The std::includes function takes four iterators: first1, last1, first2, and last2.
//              It checks if all elements in the range [first1, last1) are present in the range [first2, last2).
//              Both input ranges must be sorted in ascending order.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create two sorted vectors of integers
    std::vector<int> numbers1 = {1, 2, 3, 4, 5};
    std::vector<int> numbers2 = {2, 4, 5};

    // Check if numbers1 is a subset of numbers2 using std::includes
    bool isSubset = std::includes(numbers1.begin(), numbers1.end(), numbers2.begin(), numbers2.end());

    // Print the original vectors
    std::cout << "Vector 1 elements: ";
    for (const auto &num : numbers1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Vector 2 elements: ";
    for (const auto &num : numbers2)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the result
    if (isSubset)
    {
        std::cout << "Vector 1 is a subset of Vector 2." << std::endl;
    }
    else
    {
        std::cout << "Vector 1 is not a subset of Vector 2." << std::endl;
    }

    return 0;
}
