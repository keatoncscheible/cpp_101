// File: std_unique.cpp
// Description: This C++ program demonstrates the usage of the std::unique algorithm from the C++ Standard Library.
//              The std::unique algorithm is used to remove consecutive duplicate elements from a container.
//              It does not resize the container; instead, it moves the unique elements to the front and returns an iterator
//              to the new logical end of the unique range.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers with duplicate elements
    std::vector<int> numbers = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};

    // Use std::unique to remove consecutive duplicate elements
    auto newEnd = std::unique(numbers.begin(), numbers.end());

    // Resize the vector to the new logical end after removing duplicates
    numbers.resize(std::distance(numbers.begin(), newEnd));

    // Print the original vector with duplicate elements
    std::cout << "Original vector with duplicates: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the vector after removing duplicates
    std::cout << "Vector after removing duplicates: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
