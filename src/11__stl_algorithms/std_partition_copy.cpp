// File: std_partition_copy.cpp
// Description: This C++ program demonstrates the usage of the std::partition_copy algorithm from the C++ Standard Library.
//              The std::partition_copy algorithm is used to partition a range of elements based on a given condition and
//              copy the elements to two different output ranges based on whether they satisfy the condition or not.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {9, 4, 6, 2, 7, 3, 5, 1, 8};

    // Create two separate vectors to hold the elements that satisfy the condition and those that don't
    std::vector<int> evenNumbers;
    std::vector<int> oddNumbers;

    // Partition the vector based on whether the number is even or odd
    std::partition_copy(numbers.begin(), numbers.end(), std::back_inserter(evenNumbers), std::back_inserter(oddNumbers), [](int num)
                        { return num % 2 == 0; });

    // Print the elements that satisfy the condition (even numbers)
    std::cout << "Even numbers: ";
    for (const auto &num : evenNumbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the elements that do not satisfy the condition (odd numbers)
    std::cout << "Odd numbers: ";
    for (const auto &num : oddNumbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
