// File: std_binary_search.cpp
// Description: This C++ program demonstrates the usage of the std::binary_search algorithm from the C++ Standard Library.
//              The std::binary_search algorithm is used to check if a specific element exists in a sorted range.
//              In this example, we create a sorted vector of integers and use std::binary_search to find whether
//              a particular value exists in the vector or not.
//              The std::binary_search function takes two iterators: first and last, and the value to search for.
//              It returns a boolean value, true if the value is found, and false otherwise.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a sorted vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Print the vector
    std::cout << "Sorted vector elements: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Value to search for
    int target = 6;

    // Check if the target value exists in the vector using std::binary_search
    bool found = std::binary_search(numbers.begin(), numbers.end(), target);

    // Print the result
    if (found)
    {
        std::cout << "The value " << target << " is found in the vector." << std::endl;
    }
    else
    {
        std::cout << "The value " << target << " is not found in the vector." << std::endl;
    }

    return 0;
}
