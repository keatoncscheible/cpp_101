// File: std_find_first_of.cpp
// Description: This C++ program demonstrates the usage of the std::find_first_of algorithm from the C++ Standard Library.
//              The std::find_first_of algorithm searches for any of the elements in a second range within a first range.
//              In this example, we create two vectors of integers and use std::find_first_of to find the first occurrence of any element from the second vector in the first vector.
//              The std::find_first_of function takes four iterators: first1, last1, first2, and last2.
//              It searches for any element from the range [first2, last2) within the range [first1, last1).
//              If any element is found, it returns an iterator pointing to the first occurrence.
//              If none of the elements are found, it returns the 'last1' iterator.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create two vectors of integers
    std::vector<int> numbers1 = {1, 2, 3, 4, 5};
    std::vector<int> numbers2 = {6, 7, 8, 9, 10};

    // Print the first vector
    std::cout << "Vector elements 1: ";
    for (const auto &num : numbers1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the second vector
    std::cout << "Vector elements 2: ";
    for (const auto &num : numbers2)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Search for the first occurrence of any element from the second vector using std::find_first_of
    auto foundIt = std::find_first_of(numbers1.begin(), numbers1.end(), numbers2.begin(), numbers2.end());

    // Check if the result is valid
    if (foundIt != numbers1.end())
    {
        std::cout << "First occurrence of any element from the second vector found at index: " << std::distance(numbers1.begin(), foundIt) << std::endl;
    }
    else
    {
        std::cout << "None of the elements from the second vector found in the first vector." << std::endl;
    }

    return 0;
}
