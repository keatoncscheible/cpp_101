// File: std_adjacent_difference.cpp
// Description: This C++ program demonstrates the usage of the std::adjacent_difference algorithm from the C++ Standard Library.
//              The std::adjacent_difference algorithm calculates the differences between adjacent elements in a range.

#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 3, 5, 7, 9};

    // Create a vector to store the result of adjacent differences
    std::vector<int> differences(numbers.size());

    // Calculate the adjacent differences using std::adjacent_difference
    std::adjacent_difference(numbers.begin(), numbers.end(), differences.begin());

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the vector with adjacent differences
    std::cout << "Adjacent differences: ";
    for (const auto &diff : differences)
    {
        std::cout << diff << " ";
    }
    std::cout << std::endl;

    return 0;
}
