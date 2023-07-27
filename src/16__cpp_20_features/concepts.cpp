// File: concepts.cpp
// Description: An illustrative example of C++20 Concepts feature.
// This example demonstrates the use of C++20 Concepts to define a custom concept, 'Addable',
// that specifies a syntactic requirement for types that support addition using the '+' operator.
// We create a function template 'add' that takes two arguments of the same type, constrained by the 'Addable' concept.
// The function performs addition on the arguments and returns the result.
// In the 'main' function, we test the 'add' function with integers and doubles,
// both of which satisfy the 'Addable' concept, and display the results.
// However, if we try to call the 'add' function with 'std::string' arguments,
// it will result in a compilation error because 'std::string' does not satisfy the 'Addable' concept.
// Concepts help in expressing and enforcing constraints on template arguments,
// improving code readability and providing clearer error messages during compilation when constraints are not met.

#include <concepts>
#include <iostream>

// Concept for the addable type
template <typename T>
concept Addable = requires(T a, T b) {
                      {
                          a + b
                          } -> std::same_as<T>;
                  };

// Function template that uses the Addable concept
template <Addable T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    int num1 = 10, num2 = 20;
    double d1 = 1.5, d2 = 2.5;

    // Call add function with integers
    std::cout << "Sum of integers: " << add(num1, num2) << std::endl;

    // Call add function with doubles
    std::cout << "Sum of doubles: " << add(d1, d2) << std::endl;

    // The following line will cause a compilation error since std::string does not satisfy the Addable concept
    // std::string str1 = "Hello, ";
    // std::string str2 = "world!";
    // std::cout << add(str1, str2) << std::endl;

    return 0;
}
