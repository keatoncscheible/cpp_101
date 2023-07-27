// File: declaring_and_initializing_variables.cpp
// Description: This program demonstrates how to declare and initialize variables in C++.

#include <iostream>

int main()
{
    // Declaring and Initializing Variables
    int age = 25;          // Integer variable 'age' with value 25
    double pi = 3.14159;   // Double variable 'pi' with value 3.14159
    char grade = 'A';      // Character variable 'grade' with value 'A'
    bool isStudent = true; // Boolean variable 'isStudent' with value 'true'

    // Printing the values of the variables
    std::cout << "Age: " << age << std::endl;
    std::cout << "Pi: " << pi << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Is Student: " << std::boolalpha << isStudent << std::endl;

    return 0;
}
