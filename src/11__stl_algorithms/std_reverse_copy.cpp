// File: std_reverse_copy.cpp
// Description: This C++ program demonstrates the usage of the std::reverse_copy algorithm from the C++ Standard Library.
//              The std::reverse_copy algorithm is used to create a copy of a range with elements in reverse order.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Create a new vector to store the reversed copy of the original vector
    std::vector<int> reversedNumbers(numbers.size());

    // Use std::reverse_copy to create a copy of the original vector with elements in reverse order
    std::reverse_copy(numbers.begin(), numbers.end(), reversedNumbers.begin());

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the vector with elements in reverse order
    std::cout << "Reversed vector: ";
    for (const auto &num : reversedNumbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
