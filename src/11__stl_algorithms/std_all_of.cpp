// File: std_all_of.cpp
// Description: This C++ program demonstrates the usage of the std::all_of algorithm from the C++ Standard Library.
//              The std::all_of algorithm checks if a given predicate is true for all elements in a range.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {2, 4, 6, 8, 10};

    // Check if all elements in the vector are even
    bool allEven = std::all_of(numbers.begin(), numbers.end(), [](int num)
                               { return num % 2 == 0; });

    if (allEven)
    {
        std::cout << "All elements are even." << std::endl;
    }
    else
    {
        std::cout << "Not all elements are even." << std::endl;
    }

    // Check if all elements in the vector are positive
    bool allPositive = std::all_of(numbers.begin(), numbers.end(), [](int num)
                                   { return num > 0; });

    if (allPositive)
    {
        std::cout << "All elements are positive." << std::endl;
    }
    else
    {
        std::cout << "Not all elements are positive." << std::endl;
    }

    return 0;
}
