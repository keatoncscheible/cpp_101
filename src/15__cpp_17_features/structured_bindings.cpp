// File: structured_bindings.cpp
// Description: An illustrative example of using structured bindings in C++17.
// This example demonstrates the use of structured bindings to unpack elements from a pair.

#include <iostream>
#include <tuple>

// Function that returns a pair of two integers
std::pair<int, int> getCoordinates()
{
    return std::make_pair(10, 20);
}

int main()
{
    // Calling the function and using structured bindings to unpack the pair
    auto [x, y] = getCoordinates();

    // Print the unpacked values of x and y
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    return 0;
}
