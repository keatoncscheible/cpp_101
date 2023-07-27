// File: std_replace_copy.cpp
// Description: This C++ program demonstrates the usage of the std::replace_copy algorithm from the C++ Standard Library.
//              The std::replace_copy algorithm is used to create a new range with all occurrences of a specified value replaced by another value.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 2, 3, 4, 2, 5};

    // Create a new vector to store the result of the replace_copy operation
    std::vector<int> result(numbers.size());

    // Replace all occurrences of value 2 with value 0 using std::replace_copy
    std::replace_copy(numbers.begin(), numbers.end(), result.begin(), 2, 0);

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the vector after replace_copy operation
    std::cout << "Vector after replace_copy: ";
    for (const auto &num : result)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
