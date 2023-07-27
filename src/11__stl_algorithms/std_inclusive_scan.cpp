// File: std_inclusive_scan.cpp
// Description: This C++ program demonstrates the usage of the std::inclusive_scan algorithm from the C++ Standard Library.
//              The std::inclusive_scan algorithm computes the partial sums of a range of elements in a vector.

#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Use std::inclusive_scan to compute the partial sums of the elements in the vector
    std::vector<int> partialSums(numbers.size());
    std::inclusive_scan(numbers.begin(), numbers.end(), partialSums.begin());

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the partial sums of the elements in the vector
    std::cout << "Partial sums: ";
    for (const auto &sum : partialSums)
    {
        std::cout << sum << " ";
    }
    std::cout << std::endl;

    return 0;
}
