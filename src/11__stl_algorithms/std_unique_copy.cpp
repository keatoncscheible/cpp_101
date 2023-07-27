// File: std_unique_copy.cpp
// Description: This C++ program demonstrates the usage of the std::unique_copy algorithm from the C++ Standard Library.
//              The std::unique_copy algorithm is used to copy the unique elements from a container to another container,
//              while removing consecutive duplicate elements in the process.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers with duplicate elements
    std::vector<int> numbers = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};

    // Create a new vector to store the unique elements
    std::vector<int> uniqueNumbers;

    // Use std::unique_copy to copy unique elements from the original vector to the new vector
    std::unique_copy(numbers.begin(), numbers.end(), std::back_inserter(uniqueNumbers));

    // Print the original vector with duplicate elements
    std::cout << "Original vector with duplicates: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the new vector containing unique elements
    std::cout << "New vector with unique elements: ";
    for (const auto &num : uniqueNumbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
