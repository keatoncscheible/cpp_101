// File: std_transform_inclusive_scan.cpp
// Description: This C++ program demonstrates the usage of the std::transform_inclusive_scan algorithm from the C++ Standard Library.
//              The std::transform_inclusive_scan algorithm computes the inclusive prefix sum of a range of elements in a vector
//              and applies a given binary operation to each element before calculating the prefix sum.

#include <functional>
#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Use std::transform_inclusive_scan to compute the inclusive prefix sum of the elements in the vector
    std::vector<int> inclusivePrefixSums(numbers.size());
    std::transform_inclusive_scan(numbers.begin(), numbers.end(), inclusivePrefixSums.begin(),
                                  std::plus<int>(), [](int x)
                                  { return x * x; });

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the inclusive prefix sums of the elements in the vector
    std::cout << "Inclusive Prefix Sums: ";
    for (const auto &sum : inclusivePrefixSums)
    {
        std::cout << sum << " ";
    }
    std::cout << std::endl;

    return 0;
}
