// File: variable_templates.cpp
// Description: An illustrative example of using variable templates in C++14.
// This example demonstrates the use of variable templates to create template variables
// that can hold different types of values based on their template argument.

#include <iostream>

// Variable template to store the value of pi for different data types
template <typename T>
constexpr T pi = T(3.14159265358979323846);

int main()
{
    // Accessing the variable template to get the value of pi for different types
    double pi_double = pi<double>;                // Value of pi for double
    float pi_float = pi<float>;                   // Value of pi for float
    long double pi_long_double = pi<long double>; // Value of pi for long double

    // Print the values of pi for different types
    std::cout << "Pi (double): " << pi_double << std::endl;
    std::cout << "Pi (float): " << pi_float << std::endl;
    std::cout << "Pi (long double): " << pi_long_double << std::endl;

    return 0;
}
