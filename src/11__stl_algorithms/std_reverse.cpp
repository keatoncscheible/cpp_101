// File: std_reverse.cpp
// Description: This C++ program demonstrates the usage of the std::reverse algorithm from the C++ Standard Library.
//              The std::reverse algorithm is used to reverse the order of elements in a container.

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

    // Use std::reverse to reverse the order of elements in the vector
    std::reverse(numbers.begin(), numbers.end());

    // Print the vector after the elements are reversed
    std::cout << "Reversed vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
