// File: std_partial_sum.cpp
// Description: This C++ program demonstrates the usage of the std::partial_sum algorithm from the C++ Standard Library.
//              The std::partial_sum algorithm calculates the partial sum of elements in a range.

#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Create a vector to store the result of partial sum
    std::vector<int> partialSums(numbers.size());

    // Calculate the partial sum using std::partial_sum
    std::partial_sum(numbers.begin(), numbers.end(), partialSums.begin());

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the vector with partial sums
    std::cout << "Partial sums: ";
    for (const auto &sum : partialSums)
    {
        std::cout << sum << " ";
    }
    std::cout << std::endl;

    return 0;
}
