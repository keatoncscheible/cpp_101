// File: std_find_if_not.cpp
// Description: This C++ program demonstrates the usage of the std::find_if_not algorithm from the C++ Standard Library.
//              The std::find_if_not algorithm is similar to std::find_if but searches for an element in a range that does not satisfy a specific condition.
//              In this example, we create a vector of integers and use std::find_if_not to search for the first even number in the vector.
//              The std::find_if_not function takes two iterators: first and last, and a unary predicate that defines the condition.
//              It returns an iterator pointing to the first element in the range [first, last) that does not satisfy the condition,
//              or the 'last' iterator if all elements satisfy the condition.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {7, 2, 5, 3, 1, 8, 4, 6};

    // Print the vector
    std::cout << "Vector elements: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Search for the first even number using std::find_if_not and a lambda function as the predicate
    auto foundIt = std::find_if_not(numbers.begin(), numbers.end(), [](int num)
                                    { return num % 2 != 0; });

    // Check if the result is valid
    if (foundIt != numbers.end())
    {
        std::cout << "The first even number in the vector is: " << *foundIt << std::endl;
    }
    else
    {
        std::cout << "No even numbers found in the vector." << std::endl;
    }

    return 0;
}
