// File: std_lower_bound.cpp
// Description: This C++ program demonstrates the usage of the std::lower_bound algorithm from the C++ Standard Library.
//              The std::lower_bound algorithm is used to find the iterator pointing to the first element in a sorted range
//              that is not less than a specified value.
//              In this example, we create a sorted vector of integers and use std::lower_bound to find the position
//              of a particular value in the vector. If the value is present, it returns an iterator pointing to that value.
//              If the value is not present, it returns an iterator pointing to the position where the value can be inserted
//              while maintaining the sorted order.
//              The std::lower_bound function takes two iterators: first and last, and the value to search for.
//              It returns an iterator pointing to the found element or the position where the element should be inserted.

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

    // Find the iterator to the first element that is not less than the target using std::lower_bound
    auto it = std::lower_bound(numbers.begin(), numbers.end(), target);

    // Check if the value is found or not
    if (it != numbers.end() && *it == target)
    {
        std::cout << "The value " << target << " is found in the vector at index " << std::distance(numbers.begin(), it) << "." << std::endl;
    }
    else
    {
        std::cout << "The value " << target << " is not found in the vector. It can be inserted at index " << std::distance(numbers.begin(), it) << " while maintaining the sorted order." << std::endl;
    }

    return 0;
}
