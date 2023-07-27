// File: std_partial_sort.cpp
// Description: This C++ program demonstrates the usage of the std::partial_sort algorithm from the C++ Standard Library.
//              The std::partial_sort algorithm is used to partially sort a sequence of elements in ascending order.
//              In this example, we create a vector of integers and use std::partial_sort to find and sort the smallest k elements,
//              where k is a user-defined value.
//              The std::partial_sort function takes three iterators: first, middle, and last.
//              It rearranges the elements in the range [first, last), such that the first k elements are sorted in ascending order,
//              and the rest of the elements in the range are not sorted.
//              The order of the sorted elements is guaranteed to be the same as in the original range.
//              The complexity of std::partial_sort is typically O(N log k), making it efficient for finding the smallest elements.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> data = {9, 3, 6, 2, 8, 5, 1, 7, 4};

    // Print the unsorted vector
    std::cout << "Unsorted data: ";
    for (const auto &num : data)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // User-defined value for k (number of smallest elements to find and sort)
    int k = 4;

    // Use std::partial_sort to find and sort the smallest k elements
    std::partial_sort(data.begin(), data.begin() + k, data.end());

    // Print the partially sorted vector
    std::cout << "Partially sorted data (smallest " << k << " elements): ";
    for (const auto &num : data)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
