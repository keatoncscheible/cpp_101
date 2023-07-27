// File: std_stable_sort.cpp
// Description: This C++ program demonstrates the usage of the std::stable_sort algorithm from the C++ Standard Library.
//              The std::stable_sort algorithm is used to sort a sequence of elements in ascending order while preserving
//              the relative order of elements with equal values.
//              In this example, we create a vector of pairs, where each pair contains an integer and a corresponding string.
//              We then use std::stable_sort to sort the vector based on the integer values in ascending order.
//              The elements with equal integer values will retain their original order in the sorted vector.
//              The std::stable_sort function takes two iterators representing the range of elements to be sorted.
//              It uses a stable sorting algorithm, which ensures that the order of equal elements remains unchanged.
//              The complexity of std::stable_sort is typically O(N log N), making it efficient for most practical scenarios.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of pairs, where each pair contains an integer and a corresponding string
    std::vector<std::pair<int, std::string>> data = {{3, "apple"}, {1, "banana"}, {2, "orange"}, {3, "grape"}, {2, "melon"}};

    // Print the unsorted vector
    std::cout << "Unsorted data: ";
    for (const auto &pair : data)
    {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << std::endl;

    // Use std::stable_sort to sort the vector based on the integer values in ascending order
    std::stable_sort(data.begin(), data.end(),
                     [](const std::pair<int, std::string> &lhs, const std::pair<int, std::string> &rhs)
                     {
                         return lhs.first < rhs.first;
                     });

    // Print the sorted vector
    std::cout << "Sorted data: ";
    for (const auto &pair : data)
    {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << std::endl;

    return 0;
}
