// File: defining_functions.cpp
// Description: This program demonstrates how to define and call functions in C++.

#include <iostream>

// Function to calculate the sum of two integers
int add(int a, int b)
{
    return a + b;
}

// Function to calculate the product of two integers
int multiply(int a, int b)
{
    return a * b;
}

// Function to print a welcome message
void welcomeMessage()
{
    std::cout << "Welcome to the C++ functions example!" << std::endl;
}

int main()
{
    // Call the welcomeMessage function
    welcomeMessage();

    // Call the add function and print the result
    int result_sum = add(5, 3);
    std::cout << "Result of adding: " << result_sum << std::endl;

    // Call the multiply function and print the result
    int result_product = multiply(4, 6);
    std::cout << "Result of multiplication: " << result_product << std::endl;

    return 0;
}
