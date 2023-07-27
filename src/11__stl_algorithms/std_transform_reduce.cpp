// File: std_transform_reduce.cpp
// Description: This C++ program demonstrates the usage of the std::transform_reduce algorithm from the C++ Standard Library.
//              The std::transform_reduce algorithm applies a transformation on all elements in a range and then reduces them using a binary operation.

#include <functional>
#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Use std::transform_reduce to calculate the square sum of elements in the vector
    int squareSum = std::transform_reduce(numbers.begin(), numbers.end(), 0,
                                          std::plus<>(), [](int num)
                                          { return num * num; });

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the square sum of elements in the vector
    std::cout << "Square sum of elements: " << squareSum << std::endl;

    return 0;
}
