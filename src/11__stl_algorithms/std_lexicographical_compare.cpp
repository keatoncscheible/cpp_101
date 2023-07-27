// File: std_lexicographical_compare.cpp
// Description: This C++ program demonstrates the usage of the std::lexicographical_compare algorithm from the C++ Standard Library.
//              The std::lexicographical_compare algorithm compares two ranges lexicographically.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create two vectors of integers
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {1, 2, 3, 6, 7};

    // Check if vec1 is lexicographically less than vec2 using std::lexicographical_compare
    bool isLess = std::lexicographical_compare(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());

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

    // Check if vec1 is lexicographically less than vec2
    if (isLess)
    {
        std::cout << "Vector 1 is lexicographically less than Vector 2." << std::endl;
    }
    else
    {
        std::cout << "Vector 1 is not lexicographically less than Vector 2." << std::endl;
    }

    return 0;
}
