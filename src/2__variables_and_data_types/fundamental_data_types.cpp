// File: fundamental_data_types.cpp
// Description: This program demonstrates the fundamental data types in C++.

#include <iostream>

int main()
{
    // Fundamental Data Types
    int myInteger = 42;     // Integer data type
    double myDouble = 3.14; // Double-precision floating-point data type
    char myChar = 'A';      // Character data type
    bool myBoolean = true;  // Boolean data type

    // Printing the values of the variables
    std::cout << "Integer: " << myInteger << std::endl;
    std::cout << "Double: " << myDouble << std::endl;
    std::cout << "Character: " << myChar << std::endl;
    std::cout << "Boolean: " << std::boolalpha << myBoolean << std::endl;

    return 0;
}
