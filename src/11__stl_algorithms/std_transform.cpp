// File: std_transform.cpp
// Description: This C++ program demonstrates the usage of the std::transform algorithm from the C++ Standard Library.
//              The std::transform algorithm is used to apply a given operation to each element of a range and store the result in another range.
//              In this example, we have a vector of integers, and we use std::transform to square each element and store the squared values in another vector.
//              The original vector remains unchanged, and a new vector is created to store the squared values.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Create a new vector to store the squared values
    std::vector<int> squaredNumbers(numbers.size());

    // Use std::transform to square each element of the original vector and store the result in squaredNumbers
    std::transform(numbers.begin(), numbers.end(), squaredNumbers.begin(), [](int num)
                   { return num * num; });

    // Print the original vector
    std::cout << "Original vector elements: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the squared values
    std::cout << "Squared values: ";
    for (const auto &num : squaredNumbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
