// File: c_style_strings_vs_cpp_strings.cpp
// Description: This program demonstrates the differences between C-style strings and C++ strings (std::string).

#include <cstring> // Include the C string header for C-style strings
#include <iostream>
#include <string> // Include the string header for C++ strings

int main()
{
    // C-style string (character array)
    char cStyleString[] = "Hello, C-style string!";

    // C++ string (std::string)
    std::string cppString = "Hello, C++ string!";

    // Printing the C-style string
    std::cout << "C-style string: " << cStyleString << std::endl;

    // Printing the C++ string
    std::cout << "C++ string: " << cppString << std::endl;

    // Length of C-style string using strlen (from cstring)
    std::cout << "Length of C-style string: " << strlen(cStyleString) << " characters" << std::endl;

    // Length of C++ string using length() method (from string)
    std::cout << "Length of C++ string: " << cppString.length() << " characters" << std::endl;

    // Concatenating C-style strings using strcat (from cstring)
    char name[20] = "John ";
    char surname[] = "Doe";
    strcat(name, surname);
    std::cout << "Concatenated C-style strings: " << name << std::endl;

    // Concatenating C++ strings using + operator
    std::string firstName = "John ";
    std::string lastName = "Doe";
    std::string fullName = firstName + lastName;
    std::cout << "Concatenated C++ strings: " << fullName << std::endl;

    return 0;
}
