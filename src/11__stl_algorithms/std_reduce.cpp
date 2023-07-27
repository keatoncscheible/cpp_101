// File: std_reduce.cpp
// Description: This C++ program demonstrates the usage of the std::reduce algorithm from the C++ Standard Library.
//              The std::reduce algorithm performs a binary operation on all elements in a range.

#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Use std::reduce to calculate the sum of elements in the vector
    int sum = std::reduce(numbers.begin(), numbers.end());

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the sum of elements in the vector
    std::cout << "Sum of elements: " << sum << std::endl;

    return 0;
}
