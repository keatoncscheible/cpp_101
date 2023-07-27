// File: std_partition.cpp
// Description: This C++ program demonstrates the usage of the std::partition algorithm from the C++ Standard Library.
//              The std::partition algorithm is used to partition a range of elements in such a way that elements
//              satisfying a given condition come before elements that do not satisfy the condition.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {9, 4, 6, 2, 7, 3, 5, 1, 8};

    // Partition the vector so that even numbers come before odd numbers
    auto partitionPoint = std::partition(numbers.begin(), numbers.end(), [](int num)
                                         { return num % 2 == 0; });

    // Print the vector elements after partition
    std::cout << "Vector elements after partition: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the partition point
    std::cout << "Partition Point: " << *partitionPoint << std::endl;

    return 0;
}
