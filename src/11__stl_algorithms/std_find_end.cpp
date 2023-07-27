// File: std_find_end.cpp
// Description: This C++ program demonstrates the usage of the std::find_end algorithm from the C++ Standard Library.
//              The std::find_end algorithm searches for the last occurrence of a subsequence in a range.
//              In this example, we create a vector of integers and use std::find_end to find the last occurrence of a subsequence in the vector.
//              The std::find_end function takes four iterators: first1, last1, first2, and last2.
//              It searches for the last occurrence of the subsequence defined by the range [first2, last2) within the range [first1, last1).
//              If the subsequence is found, it returns an iterator pointing to the first element of the last occurrence.
//              If the subsequence is not found, it returns the 'last1' iterator.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4};

    // Create a subsequence to search for
    std::vector<int> subsequence = {1, 2, 3};

    // Print the vector
    std::cout << "Vector elements: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the subsequence
    std::cout << "Subsequence to search: ";
    for (const auto &num : subsequence)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Search for the last occurrence of the subsequence using std::find_end
    auto foundIt = std::find_end(numbers.begin(), numbers.end(), subsequence.begin(), subsequence.end());

    // Check if the result is valid
    if (foundIt != numbers.end())
    {
        std::cout << "Last occurrence of the subsequence found at index: " << std::distance(numbers.begin(), foundIt) << std::endl;
    }
    else
    {
        std::cout << "Subsequence not found in the vector." << std::endl;
    }

    return 0;
}
