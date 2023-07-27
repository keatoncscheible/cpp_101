// File: std_inner_product.cpp
// Description: This C++ program demonstrates the usage of the std::inner_product algorithm from the C++ Standard Library.
//              The std::inner_product algorithm is used to calculate the inner product of two ranges.

#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    // Create two vectors of integers
    std::vector<int> vector1 = {1, 2, 3, 4, 5};
    std::vector<int> vector2 = {10, 20, 30, 40, 50};

    // Calculate the inner product of vector1 and vector2 using std::inner_product
    int result = std::inner_product(vector1.begin(), vector1.end(), vector2.begin(), 0);

    // Print the result
    std::cout << "Inner product of vector1 and vector2: " << result << std::endl;

    return 0;
}
