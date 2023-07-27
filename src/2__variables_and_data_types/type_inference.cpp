// File: type_inference.cpp
// Description: This program demonstrates type inference in C++ using 'auto' and 'decltype' keywords.

#include <iostream>

int main()
{
    // Type Inference with 'auto'
    auto x = 5;         // 'auto' infers the type of 'x' as integer
    auto pi = 3.14;     // 'auto' infers the type of 'pi' as double
    auto name = "John"; // 'auto' infers the type of 'name' as const char*

    // Type Inference with 'decltype'
    int a = 10;
    double b = 3.5;
    decltype(a + b) result; // 'decltype' infers the type of 'result' as double

    // Printing the inferred types
    std::cout << "Type of 'x': " << typeid(x).name() << std::endl;
    std::cout << "Type of 'pi': " << typeid(pi).name() << std::endl;
    std::cout << "Type of 'name': " << typeid(name).name() << std::endl;
    std::cout << "Type of 'result': " << typeid(result).name() << std::endl;

    return 0;
}
