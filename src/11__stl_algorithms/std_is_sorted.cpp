// File: std_is_sorted.cpp
// Description: This C++ program demonstrates the usage of the std::is_sorted algorithm from the C++ Standard Library.
//              The std::is_sorted algorithm is used to check if a range of elements is sorted in ascending order.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 3, 5, 7, 9};

    // Check if the vector is sorted in ascending order using std::is_sorted
    bool isSorted = std::is_sorted(numbers.begin(), numbers.end());

    // Print the vector elements
    std::cout << "Vector elements: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if the vector is sorted
    if (isSorted)
    {
        std::cout << "The vector is sorted in ascending order." << std::endl;
    }
    else
    {
        std::cout << "The vector is not sorted in ascending order." << std::endl;
    }

    return 0;
}
