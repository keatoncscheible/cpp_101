// File: std_sort_heap.cpp
// Description: This C++ program demonstrates the usage of the std::sort_heap algorithm from the C++ Standard Library.
//              The std::sort_heap algorithm is used to sort a heap in ascending order.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {12, 7, 8, 4, 5, 6, 10};

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Convert the vector into a heap using std::make_heap
    std::make_heap(numbers.begin(), numbers.end());

    // Sort the heap in ascending order using std::sort_heap
    std::sort_heap(numbers.begin(), numbers.end());

    // Print the sorted vector
    std::cout << "Sorted vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
