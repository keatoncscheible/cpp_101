// File: std_for_each_n.cpp
// Description: This C++ program demonstrates the usage of the std::for_each_n algorithm from the C++ Standard Library.
//              The std::for_each_n algorithm applies a given function to the first 'n' elements in a range.

#include <algorithm>
#include <iostream>
#include <vector>

// A function to print the value of an element
void printElement(int value)
{
    std::cout << value << " ";
}

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Use std::for_each_n to print the first 3 elements in the vector
    std::cout << "First 3 elements in the vector: ";
    std::for_each_n(numbers.begin(), 3, printElement);
    std::cout << std::endl;

    // Use std::for_each_n with a lambda function to modify the first 4 elements in the vector
    std::for_each_n(numbers.begin(), 4, [](int &value)
                    { value *= 2; });

    // Print the modified elements
    std::cout << "Modified elements in the vector: ";
    std::for_each(numbers.begin(), numbers.end(), printElement);
    std::cout << std::endl;

    return 0;
}
