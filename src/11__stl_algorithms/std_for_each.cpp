// File: std_for_each.cpp
// Description: This C++ program demonstrates the usage of the std::for_each algorithm from the C++ Standard Library.
//              The std::for_each algorithm applies a given function to each element in a specified range.

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

    // Use std::for_each to print each element in the vector
    std::cout << "Elements in the vector: ";
    std::for_each(numbers.begin(), numbers.end(), printElement);
    std::cout << std::endl;

    // Use std::for_each with a lambda function to modify each element in the vector
    std::for_each(numbers.begin(), numbers.end(), [](int &value)
                  { value *= 2; });

    // Print the modified elements
    std::cout << "Modified elements in the vector: ";
    std::for_each(numbers.begin(), numbers.end(), printElement);
    std::cout << std::endl;

    return 0;
}
