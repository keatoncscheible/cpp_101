// File: std_fill_n.cpp
// Description: This C++ program demonstrates the usage of the std::fill_n algorithm from the C++ Standard Library.
//              The std::fill_n algorithm is used to set a specified number of elements in a range to a given value.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Use std::fill_n to set the first three elements of the vector to the value 10
    std::fill_n(numbers.begin(), 3, 10);

    // Print the vector after filling the first three elements with the value 10
    std::cout << "Vector after filling first three elements with 10: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
