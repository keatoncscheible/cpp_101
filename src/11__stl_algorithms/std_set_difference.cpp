// File: std_set_difference.cpp
// Description: This C++ program demonstrates the usage of the std::set_difference algorithm from the C++ Standard Library.
//              The std::set_difference algorithm is used to compute the difference between two sorted ranges and store the result in another range.
//              In this example, we have two sorted vectors, and we use std::set_difference to find the elements that are present in the first vector but not in the second vector.
//              The resulting vector will contain all the elements that are in the first input vector but not in the second input vector, maintaining the sorted order.
//              Both input ranges must be sorted in ascending order.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create two sorted vectors of integers
    std::vector<int> numbers1 = {1, 2, 4, 5, 6};
    std::vector<int> numbers2 = {2, 3, 5, 7};

    // Create a vector to store the result of the set_difference
    std::vector<int> result(numbers1.size() + numbers2.size());

    // Find the difference between numbers1 and numbers2 using std::set_difference
    auto it = std::set_difference(numbers1.begin(), numbers1.end(), numbers2.begin(), numbers2.end(), result.begin());

    // Resize the result vector to fit the actual elements in the difference
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

    // Print the difference between numbers1 and numbers2
    std::cout << "Difference elements: ";
    for (const auto &num : result)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
