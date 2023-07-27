// File: std_nth_element.cpp
// Description: This C++ program demonstrates the usage of the std::nth_element algorithm from the C++ Standard Library.
//              The std::nth_element algorithm is used to partially sort a sequence of elements in such a way that the element
//              at the nth position (0-indexed) is in its sorted position, and all elements before it are less than or equal to it,
//              and all elements after it are greater than or equal to it.
//              In this example, we create a vector of integers and use std::nth_element to find the median of the elements.
//              The median is the element at the middle position when the elements are sorted.
//              The std::nth_element function takes three iterators: first, nth, and last.
//              It rearranges the elements in the range [first, last), such that the element at the nth position is in its sorted position.
//              The order of the elements before and after the nth position is unspecified.
//              The complexity of std::nth_element is typically O(N) on average, making it efficient for finding the median.

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

    // Find the median using std::nth_element
    size_t n = data.size() / 2; // Index of the middle element (median) when the elements are sorted
    std::nth_element(data.begin(), data.begin() + n, data.end());

    // Print the vector with the median element at its sorted position
    std::cout << "Vector after finding the median: ";
    for (const auto &num : data)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // The median is the element at index n (0-indexed)
    int median = data[n];
    std::cout << "Median: " << median << std::endl;

    return 0;
}
