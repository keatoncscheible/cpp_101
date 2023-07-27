// File: std_sort.cpp
// Description: This C++ program demonstrates the usage of the std::sort algorithm from the C++ Standard Library.
//              The std::sort algorithm is used to sort a sequence of elements in ascending order.
//              In this example, we create a vector of integers with some unsorted elements.
//              We then use std::sort to sort the elements in ascending order and print the sorted result.
//              The std::sort function takes two iterators representing the range of elements to be sorted.
//              It uses a variation of the introsort algorithm, which is a hybrid of quicksort, heapsort, and insertion sort.
//              The complexity of std::sort is typically O(N log N), making it efficient for most practical scenarios.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers with some unsorted elements
    std::vector<int> numbers = {8, 2, 5, 3, 1, 4, 7, 6};

    // Print the unsorted vector
    std::cout << "Unsorted numbers: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Use std::sort to sort the vector in ascending order
    std::sort(numbers.begin(), numbers.end());

    // Print the sorted vector
    std::cout << "Sorted numbers: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
