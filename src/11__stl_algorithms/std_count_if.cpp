// File: std_count_if.cpp
// Description: This C++ program demonstrates the usage of the std::count_if algorithm from the C++ Standard Library.
//              The std::count_if algorithm is used to count the elements in a range that satisfy a specific condition.
//              In this example, we create a vector of integers and use std::count_if to count the elements that are greater than 2.
//              The std::count_if function takes two iterators: first and last, and a unary predicate that defines the condition.
//              It returns the number of elements in the range [first, last) that satisfy the given condition.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Print the vector
    std::cout << "Vector elements: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Define the condition for std::count_if (count elements greater than 2)
    auto condition = [](int num)
    { return num > 2; };

    // Count the elements that satisfy the condition using std::count_if
    int countGreaterThanTwo = std::count_if(numbers.begin(), numbers.end(), condition);

    // Print the result
    std::cout << "Elements greater than 2: " << countGreaterThanTwo << std::endl;

    return 0;
}
