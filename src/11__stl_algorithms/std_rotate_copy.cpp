// File: std_rotate_copy.cpp
// Description: This C++ program demonstrates the usage of the std::rotate_copy algorithm from the C++ Standard Library.
//              The std::rotate_copy algorithm is used to make a copy of a range with elements rotated such that
//              a specified element becomes the new first element.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Create a new vector and use std::rotate_copy to copy the elements with '3' as the new first element
    std::vector<int> rotated_copy;
    std::rotate_copy(numbers.begin(), std::find(numbers.begin(), numbers.end(), 3), numbers.end(), std::back_inserter(rotated_copy));

    // Print the copied vector after rotation
    std::cout << "Copied vector after rotation: ";
    for (const auto &num : rotated_copy)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
