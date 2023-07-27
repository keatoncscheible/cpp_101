// File: std_transform_exclusive_scan.cpp
// Description: This C++ program demonstrates the usage of the std::transform_exclusive_scan algorithm from the C++ Standard Library.
//              The std::transform_exclusive_scan algorithm computes the exclusive prefix sum of a range of elements in a vector
//              and applies a given binary operation to each element before calculating the prefix sum.

#include <functional>
#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Use std::transform_exclusive_scan to compute the exclusive prefix sum of the elements in the vector
    std::vector<int> exclusivePrefixSums(numbers.size());
    std::transform_exclusive_scan(numbers.begin(), numbers.end(), exclusivePrefixSums.begin(), 0,
                                  std::plus<int>(), [](int x)
                                  { return x * x; });

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the exclusive prefix sums of the elements in the vector
    std::cout << "Exclusive Prefix Sums: ";
    for (const auto &sum : exclusivePrefixSums)
    {
        std::cout << sum << " ";
    }
    std::cout << std::endl;

    return 0;
}
