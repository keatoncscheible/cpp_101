// File: std_none_of.cpp
// Description: This C++ program demonstrates the usage of the std::none_of algorithm from the C++ Standard Library.
//              The std::none_of algorithm checks if a given predicate is false for all elements in a range.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {2, 4, 6, 8, 10};

    // Check if none of the elements in the vector are negative
    bool noneNegative = std::none_of(numbers.begin(), numbers.end(), [](int num)
                                     { return num < 0; });

    if (noneNegative)
    {
        std::cout << "No elements are negative." << std::endl;
    }
    else
    {
        std::cout << "At least one element is negative." << std::endl;
    }

    // Check if none of the elements in the vector are odd
    bool noneOdd = std::none_of(numbers.begin(), numbers.end(), [](int num)
                                { return num % 2 != 0; });

    if (noneOdd)
    {
        std::cout << "No elements are odd." << std::endl;
    }
    else
    {
        std::cout << "At least one element is odd." << std::endl;
    }

    return 0;
}
