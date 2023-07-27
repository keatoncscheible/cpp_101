// File: function_overloading.cpp
// Description: This program demonstrates function overloading in C++.

#include <iostream>

// Function to add two integers
int add(int a, int b)
{
    return a + b;
}

// Function to add three integers using function overloading
int add(int a, int b, int c)
{
    return a + b + c;
}

// Function to add two floating-point numbers using function overloading
double add(double a, double b)
{
    return a + b;
}

int main()
{
    int num1 = 5, num2 = 10, num3 = 15;
    double doubleNum1 = 2.5, doubleNum2 = 3.7;

    // Call the integer version of add function
    int sum1 = add(num1, num2);
    std::cout << "Sum of " << num1 << " and " << num2 << " is: " << sum1 << std::endl;

    // Call the integer version of add function with three arguments
    int sum2 = add(num1, num2, num3);
    std::cout << "Sum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << sum2 << std::endl;

    // Call the double version of add function
    double sum3 = add(doubleNum1, doubleNum2);
    std::cout << "Sum of " << doubleNum1 << " and " << doubleNum2 << " is: " << sum3 << std::endl;

    return 0;
}
