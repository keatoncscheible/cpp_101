// File: std_stable_partition.cpp
// Description: This C++ program demonstrates the usage of the std::stable_partition algorithm from the C++ Standard Library.
//              The std::stable_partition algorithm is used to partition a range of elements based on a given condition while
//              preserving the relative order of the elements in each partition.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {9, 4, 6, 2, 7, 3, 5, 1, 8};

    // Partition the vector based on whether the number is even or odd while preserving the relative order of elements
    auto partitionPoint = std::stable_partition(numbers.begin(), numbers.end(), [](int num)
                                                { return num % 2 == 0; });

    // Print the partitioned vector
    std::cout << "Partitioned vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the position where the partition occurs
    std::cout << "Partition point: " << std::distance(numbers.begin(), partitionPoint) << std::endl;

    // Print the elements before the partition
    std::cout << "Even numbers (before partition): ";
    for (auto it = numbers.begin(); it != partitionPoint; ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Print the elements after the partition
    std::cout << "Odd numbers (after partition): ";
    for (auto it = partitionPoint; it != numbers.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
