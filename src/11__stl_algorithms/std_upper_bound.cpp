// File: std_upper_bound.cpp
// Description: This C++ program demonstrates the usage of the std::upper_bound algorithm from the C++ Standard Library.
//              The std::upper_bound algorithm is used to find the iterator pointing to the first element in a sorted range
//              that is greater than a specified value.
//              In this example, we create a sorted vector of integers and use std::upper_bound to find the position
//              of a particular value in the vector. If the value is present, it returns an iterator pointing to the element
//              that is greater than the specified value. If the value is not present, it returns an iterator pointing to
//              the position where the value can be inserted while maintaining the sorted order.
//              The std::upper_bound function takes two iterators: first and last, and the value to search for.
//              It returns an iterator pointing to the first element that is greater than the target value.

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
    int target = 35;

    // Find the iterator to the first element that is greater than the target using std::upper_bound
    auto it = std::upper_bound(numbers.begin(), numbers.end(), target);

    // Check if the value is found or not
    if (it != numbers.end())
    {
        std::cout << "The value " << target << " can be inserted at index " << std::distance(numbers.begin(), it) << " while maintaining the sorted order." << std::endl;
    }
    else
    {
        std::cout << "All elements in the vector are less than " << target << ". The value can be inserted at the end." << std::endl;
    }

    return 0;
}
