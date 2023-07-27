// File: std_any_of.cpp
// Description: This C++ program demonstrates the usage of the std::any_of algorithm from the C++ Standard Library.
//              The std::any_of algorithm checks if a given predicate is true for at least one element in a range.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {2, 4, 6, 8, 10};

    // Check if any element in the vector is odd
    bool anyOdd = std::any_of(numbers.begin(), numbers.end(), [](int num)
                              { return num % 2 != 0; });

    if (anyOdd)
    {
        std::cout << "At least one element is odd." << std::endl;
    }
    else
    {
        std::cout << "No elements are odd." << std::endl;
    }

    // Check if any element in the vector is negative
    bool anyNegative = std::any_of(numbers.begin(), numbers.end(), [](int num)
                                   { return num < 0; });

    if (anyNegative)
    {
        std::cout << "At least one element is negative." << std::endl;
    }
    else
    {
        std::cout << "No elements are negative." << std::endl;
    }

    return 0;
}
