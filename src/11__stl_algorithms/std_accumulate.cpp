// File: std_accumulate.cpp
// Description: This C++ program demonstrates the usage of the std::accumulate algorithm from the C++ Standard Library.
//              The std::accumulate algorithm is used to calculate the sum of elements in a range.

#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Calculate the sum of all elements in the vector using std::accumulate
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);

    // Print the result
    std::cout << "Sum of the elements: " << sum << std::endl;

    return 0;
}
