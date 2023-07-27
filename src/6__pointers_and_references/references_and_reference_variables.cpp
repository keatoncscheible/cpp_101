// File: references_and_reference_variables.cpp
// Description: This program demonstrates the usage of references and reference variables in C++.

#include <iostream>

// Function to demonstrate references
void demonstrateReference(int &refVar)
{
    refVar = 20; // Modifying the original variable through the reference
}

int main()
{
    // Example 1: References
    int num = 10;
    int &refNum = num; // Reference variable refNum refers to num

    // Printing the value of num and refNum
    std::cout << "Example 1:" << std::endl;
    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Value of refNum: " << refNum << std::endl;

    // Modifying the value of refNum will also modify the value of num
    refNum = 30;
    std::cout << "Modified value of num (through refNum): " << num << std::endl;

    // Example 2: Function with Reference Parameter
    int x = 100;
    std::cout << "\nExample 2:" << std::endl;
    std::cout << "Value of x before calling the function: " << x << std::endl;

    demonstrateReference(x);
    std::cout << "Value of x after calling the function: " << x << std::endl;

    return 0;
}
