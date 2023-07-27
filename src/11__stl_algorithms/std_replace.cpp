// File: std_replace.cpp
// Description: This C++ program demonstrates the usage of the std::replace algorithm from the C++ Standard Library.
//              The std::replace algorithm is used to replace all occurrences of a specified value in a range with another value.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 2, 3, 4, 2, 5};

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Replace all occurrences of value 2 with value 0 using std::replace
    std::replace(numbers.begin(), numbers.end(), 2, 0);

    // Print the vector after replacement
    std::cout << "Vector after replacement: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
