// File: function_parameters.cpp
// Description: This program demonstrates function parameters in C++ and the difference between pass by value and pass by reference.

#include <iostream>

// Function to increment a value using pass by value
void incrementByValue(int num)
{
    num += 1;
}

// Function to increment a value using pass by reference
void incrementByReference(int &num)
{
    num += 1;
}

int main()
{
    int value = 10;

    // Call incrementByValue with the value
    std::cout << "Before incrementByValue, value: " << value << std::endl;
    incrementByValue(value);
    std::cout << "After incrementByValue, value: " << value << std::endl;

    // Call incrementByReference with the value
    std::cout << "Before incrementByReference, value: " << value << std::endl;
    incrementByReference(value);
    std::cout << "After incrementByReference, value: " << value << std::endl;

    return 0;
}
