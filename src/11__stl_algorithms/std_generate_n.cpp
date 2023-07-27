// File: std_generate_n.cpp
// Description: This C++ program demonstrates the usage of the std::generate_n algorithm from the C++ Standard Library.
//              The std::generate_n algorithm is used to fill a specific number of elements in a container with values
//              generated by a given function or functor.

#include <algorithm>
#include <iostream>
#include <vector>

// Functor to generate values for the std::generate_n algorithm
struct Generator
{
    int currentValue = 0;

    // Overload the function call operator to generate values
    int operator()()
    {
        return currentValue++;
    }
};

int main()
{
    // Create a vector of integers with a size of 5
    std::vector<int> numbers(5);

    // Use std::generate_n with the Generator functor to fill the first 5 elements of the vector with values
    std::generate_n(numbers.begin(), 5, Generator());

    // Print the vector after filling the first 5 elements with generated values
    std::cout << "Generated vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}