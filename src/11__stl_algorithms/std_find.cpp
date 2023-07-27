// File: std_find.cpp
// Description: This C++ program demonstrates the usage of the std::find algorithm from the C++ Standard Library.
//              The std::find algorithm is used to search for a specific value in a range.
//              In this example, we create a vector of integers and use std::find to search for a specific number in the vector.
//              The std::find function takes two iterators: first and last, and a value to search for.
//              It returns an iterator pointing to the first occurrence of the value in the range [first, last),
//              or the 'last' iterator if the value is not found.

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

    // Search for a specific number (e.g., 5) using std::find
    int targetNumber = 5;
    auto foundIt = std::find(numbers.begin(), numbers.end(), targetNumber);

    // Check if the result is valid
    if (foundIt != numbers.end())
    {
        std::cout << "The number " << targetNumber << " is found at index: " << std::distance(numbers.begin(), foundIt) << std::endl;
    }
    else
    {
        std::cout << "The number " << targetNumber << " is not found in the vector." << std::endl;
    }

    return 0;
}
