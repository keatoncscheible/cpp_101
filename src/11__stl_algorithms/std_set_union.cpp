// File: std_set_union.cpp
// Description: This C++ program demonstrates the usage of the std::set_union algorithm from the C++ Standard Library.
//              The std::set_union algorithm is used to compute the union of two sorted ranges and store the result in another range.
//              In this example, we have two sorted vectors, and we use std::set_union to find the union of these two vectors.
//              The resulting vector will contain all the unique elements present in either of the input vectors, maintaining the sorted order.
//              Both input ranges must be sorted in ascending order.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create two sorted vectors of integers
    std::vector<int> numbers1 = {1, 2, 4, 5, 6};
    std::vector<int> numbers2 = {2, 3, 5, 7};

    // Create a vector to store the result of the set_union
    std::vector<int> result(numbers1.size() + numbers2.size());

    // Find the union of numbers1 and numbers2 using std::set_union
    auto it = std::set_union(numbers1.begin(), numbers1.end(), numbers2.begin(), numbers2.end(), result.begin());

    // Resize the result vector to fit the actual elements in the union
    result.resize(std::distance(result.begin(), it));

    // Print the original vectors
    std::cout << "Vector 1 elements: ";
    for (const auto &num : numbers1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Vector 2 elements: ";
    for (const auto &num : numbers2)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the union of numbers1 and numbers2
    std::cout << "Union elements: ";
    for (const auto &num : result)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
