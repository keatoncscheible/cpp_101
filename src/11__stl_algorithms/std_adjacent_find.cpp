// File: std_adjacent_find.cpp
// Description: This C++ program demonstrates the usage of the std::adjacent_find algorithm from the C++ Standard Library.
//              The std::adjacent_find algorithm searches for a pair of adjacent elements in a range that are equal.
//              In this example, we create a vector of integers and use std::adjacent_find to find the first occurrence of two adjacent elements with the same value.
//              The std::adjacent_find function takes two iterators: first and last.
//              It searches for a pair of adjacent elements in the range [first, last) that are equal.
//              If such a pair is found, it returns an iterator pointing to the first element of the pair.
//              If no such pair is found, it returns the 'last' iterator.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 3, 4, 5, 6};

    // Print the vector
    std::cout << "Vector elements: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Search for the first occurrence of two adjacent elements with the same value using std::adjacent_find
    auto foundIt = std::adjacent_find(numbers.begin(), numbers.end());

    // Check if the result is valid
    if (foundIt != numbers.end())
    {
        std::cout << "First occurrence of two adjacent equal elements found at index: " << std::distance(numbers.begin(), foundIt) << std::endl;
    }
    else
    {
        std::cout << "No adjacent elements with the same value found in the vector." << std::endl;
    }

    return 0;
}
