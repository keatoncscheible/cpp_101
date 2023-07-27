// File: std_equal_range.cpp
// Description: This C++ program demonstrates the usage of the std::equal_range algorithm from the C++ Standard Library.
//              The std::equal_range algorithm is used to find a range of iterators representing all the elements in a sorted
//              range that are equivalent to a specified value.
//              In this example, we create a sorted vector of integers and use std::equal_range to find the range of values
//              equal to a particular value in the vector. The range will include all the elements that are equivalent to the target value.
//              The std::equal_range function takes two iterators: first and last, and the value to search for.
//              It returns a pair of iterators. The first iterator points to the first element that is not less than the target value,
//              and the second iterator points to the first element greater than the target value.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a sorted vector of integers
    std::vector<int> numbers = {10, 20, 30, 30, 40, 50, 60, 70};

    // Print the vector
    std::cout << "Sorted vector elements: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Value to search for
    int target = 30;

    // Find the range of iterators representing elements equal to the target using std::equal_range
    auto range = std::equal_range(numbers.begin(), numbers.end(), target);

    // Check if the range is not empty
    if (range.first != range.second)
    {
        std::cout << "The range of elements equal to " << target << " is: ";
        for (auto it = range.first; it != range.second; ++it)
        {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "No elements found equal to " << target << " in the vector." << std::endl;
    }

    return 0;
}
