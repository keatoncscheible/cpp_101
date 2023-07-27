// File: std_equal.cpp
// Description: This C++ program demonstrates the usage of the std::equal algorithm from the C++ Standard Library.
//              The std::equal algorithm checks if the elements in two ranges are equal.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create two vectors of integers
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {1, 2, 3, 4, 5};

    // Check if both vectors have equal elements using std::equal
    bool areEqual = std::equal(vec1.begin(), vec1.end(), vec2.begin());

    // Print the original vectors
    std::cout << "Vector 1: ";
    for (const auto &num : vec1)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Vector 2: ";
    for (const auto &num : vec2)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if both vectors are equal
    if (areEqual)
    {
        std::cout << "Both vectors are equal." << std::endl;
    }
    else
    {
        std::cout << "Vectors are not equal." << std::endl;
    }

    return 0;
}
