// File: switch_statements.cpp
// Description: This program demonstrates the use of switch statements in C++.

#include <iostream>

int main()
{
    char grade;

    std::cout << "Enter your grade (A, B, C, D, or F): ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "Excellent! You got an A." << std::endl;
        break;
    case 'B':
        std::cout << "Good job! You got a B." << std::endl;
        break;
    case 'C':
        std::cout << "You got a C. Keep up the effort." << std::endl;
        break;
    case 'D':
        std::cout << "You got a D. You need to improve." << std::endl;
        break;
    case 'F':
        std::cout << "Oops! You failed." << std::endl;
        break;
    default:
        std::cout << "Invalid grade entered." << std::endl;
        break;
    }

    return 0;
}
