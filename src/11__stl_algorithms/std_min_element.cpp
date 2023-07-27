// File: std_min_element.cpp
// Description: This C++ program demonstrates the usage of the std::min_element algorithm from the C++ Standard Library.
//              The std::min_element algorithm is used to find the smallest element in a range.
//              In this example, we create a vector of integers and use std::min_element to find the smallest element in the vector.
//              The std::min_element function takes two iterators: first and last.
//              It returns an iterator pointing to the smallest element in the range [first, last).
//              If multiple elements are smallest, it returns the iterator pointing to the first occurrence.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {7, 2, 5, 3, 1, 8, 4, 6};

    // Print the vector
    std::cout << "Vector elements: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Find the smallest element in the vector using std::min_element
    auto minElementIt = std::min_element(numbers.begin(), numbers.end());

    // Check if the result is valid
    if (minElementIt != numbers.end())
    {
        std::cout << "The smallest element in the vector is: " << *minElementIt << std::endl;
    }
    else
    {
        std::cout << "The vector is empty." << std::endl;
    }

    return 0;
}
