// File: std_replace_copy_if.cpp
// Description: This C++ program demonstrates the usage of the std::replace_copy_if algorithm from the C++ Standard Library.
//              The std::replace_copy_if algorithm is used to create a new range with elements replaced by another value based on a specified condition.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7};

    // Create a new vector to store the result of the replace_copy_if operation
    std::vector<int> result(numbers.size());

    // Replace all odd numbers with value 0 using std::replace_copy_if
    std::replace_copy_if(
        numbers.begin(), numbers.end(), result.begin(),
        [](int num)
        { return num % 2 != 0; },
        0);

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the vector after replace_copy_if operation
    std::cout << "Vector after replace_copy_if: ";
    for (const auto &num : result)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
