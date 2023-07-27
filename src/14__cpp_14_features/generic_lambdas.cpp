// File: generic_lambdas.cpp
// Description: An illustrative example of using generic lambdas in C++14.
// This example demonstrates the use of generic lambdas to create lambda functions
// that can operate on different types without explicitly specifying the types.

#include <iostream>

int main()
{
    // Generic lambda function that adds two values of any type
    auto add = [](auto a, auto b)
    {
        return a + b;
    };

    int result1 = add(5, 10);         // Adding two integers
    double result2 = add(3.14, 2.71); // Adding two doubles
    char result3 = add('A', 'B');     // Adding two characters

    std::cout << "Result1: " << result1 << std::endl;
    std::cout << "Result2: " << result2 << std::endl;
    std::cout << "Result3: " << result3 << std::endl;

    return 0;
}
