// File: std_is_sorted_until.cpp
// Description: This C++ program demonstrates the usage of the std::is_sorted_until algorithm from the C++ Standard Library.
//              The std::is_sorted_until algorithm is used to find the first element in a range that breaks the sorted order.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 3, 5, 2, 4, 6};

    // Find the first element that breaks the sorted order using std::is_sorted_until
    auto firstUnsorted = std::is_sorted_until(numbers.begin(), numbers.end());

    // Print the vector elements
    std::cout << "Vector elements: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if the vector is sorted up to the first unsorted element
    if (firstUnsorted == numbers.end())
    {
        std::cout << "The vector is fully sorted." << std::endl;
    }
    else
    {
        std::cout << "The vector is sorted up to element: " << *firstUnsorted << std::endl;
    }

    return 0;
}
