// File: range_based_for_loops.cpp
// Description: An illustrative example of using range-based for loops introduced in C++11 to
//  iterate over elements in a container.

#include <iostream>
#include <vector>

int main()
{
    // Declare a vector of integers
    std::vector<int> numbers = {10, 25, 5, 15, 30};

    // Use a range-based for loop to iterate over the elements of the vector
    std::cout << "Elements of the vector: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Use a range-based for loop to modify elements in the vector
    for (int &num : numbers)
    {
        num *= 2; // Double the value of each element
    }

    // Print the modified elements of the vector
    std::cout << "Modified elements of the vector: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
