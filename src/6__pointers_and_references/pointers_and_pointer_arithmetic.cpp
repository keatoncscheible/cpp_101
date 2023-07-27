// File: pointers_and_pointer_arithmetic.cpp
// Description: This program demonstrates the basics of pointers and pointer arithmetic in C++.

#include <iostream>

int main()
{
    // Example 1: Basic Pointer
    int num = 42;
    int *ptr = &num; // Pointer to an integer, storing the address of 'num'

    // Printing the value and address of the variable
    std::cout << "Example 1:" << std::endl;
    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Value of ptr (address of num): " << ptr << std::endl;
    std::cout << "Value stored at the address ptr points to: " << *ptr << std::endl;

    // Example 2: Pointer Arithmetic
    int arr[] = {10, 20, 30, 40, 50};
    int *arrPtr = arr; // Pointer to the first element of the array

    // Printing the array using pointer arithmetic
    std::cout << "\nExample 2:" << std::endl;
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "Element " << i << ": " << *(arrPtr + i) << std::endl;
    }

    // Example 3: Pointer to Pointer (Double Pointer)
    int x = 100;
    int *xPtr = &x;        // Pointer to x
    int **xPtrPtr = &xPtr; // Pointer to the pointer xPtr

    // Printing the value and address of x using pointer to pointer
    std::cout << "\nExample 3:" << std::endl;
    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Address of x: " << &x << std::endl;
    std::cout << "Value of xPtr (address of x): " << xPtr << std::endl;
    std::cout << "Value of xPtrPtr (address of xPtr): " << xPtrPtr << std::endl;
    std::cout << "Value stored at the address xPtrPtr points to (value of x): " << **xPtrPtr << std::endl;

    return 0;
}
