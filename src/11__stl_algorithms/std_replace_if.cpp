// File: std_replace_if.cpp
// Description: This C++ program demonstrates the usage of the std::replace_if algorithm from the C++ Standard Library.
//              The std::replace_if algorithm is used to replace all elements in a range that satisfy a given condition with a specified value.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7};

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Replace all even numbers with value 0 using std::replace_if
    std::replace_if(
        numbers.begin(), numbers.end(), [](int num)
        { return num % 2 == 0; },
        0);

    // Print the vector after replacement
    std::cout << "Vector after replacement: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
