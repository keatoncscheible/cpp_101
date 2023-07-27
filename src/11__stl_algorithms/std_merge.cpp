// File: std_merge.cpp
// Description: This C++ program demonstrates the usage of the std::merge algorithm from the C++ Standard Library.
//              The std::merge algorithm is used to merge two sorted ranges into a single sorted range.
//              In this example, we create two sorted vectors of integers and use std::merge to merge them into a new sorted vector.
//              The two input vectors must already be sorted in ascending order.
//              The std::merge function takes four iterators: first1, last1, first2, and last2, representing the two input ranges.
//              It also takes an output iterator, where the merged range will be stored.
//              The function returns an iterator pointing to the end of the resulting merged range.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create two sorted vectors of integers
    std::vector<int> numbers1 = {1, 3, 5, 7, 9};
    std::vector<int> numbers2 = {2, 4, 6, 8, 10};

    // Print the two sorted vectors
    std::cout << "First sorted vector elements: ";
    for (const auto &num : numbers1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Second sorted vector elements: ";
    for (const auto &num : numbers2)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Create a vector to store the merged result
    std::vector<int> merged(numbers1.size() + numbers2.size());

    // Merge the two sorted vectors using std::merge
    std::merge(numbers1.begin(), numbers1.end(), numbers2.begin(), numbers2.end(), merged.begin());

    // Print the merged vector
    std::cout << "Merged vector elements: ";
    for (const auto &num : merged)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
