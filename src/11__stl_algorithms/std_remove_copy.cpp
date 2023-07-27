// File: std_remove_copy.cpp
// Description: This C++ program demonstrates the usage of the std::remove_copy algorithm from the C++ Standard Library.
//              The std::remove_copy algorithm is used to copy elements from a source container to a destination container,
//              excluding elements that satisfy a certain condition. It does not modify the original container.

#include <algorithm>
#include <iostream>
#include <vector>

// A function to check if a number is even
bool isEven(int num)
{
    return num % 2 == 0;
}

int main()
{
    // Create a vector of integers
    std::vector<int> source = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Create a destination vector to hold the elements after removing even numbers
    std::vector<int> destination(source.size());

    // Use std::remove_copy to copy elements from the source vector to the destination vector,
    // excluding the even numbers
    auto newEnd = std::remove_copy(source.begin(), source.end(), destination.begin(), isEven);

    // Resize the destination vector to the number of elements copied
    destination.resize(std::distance(destination.begin(), newEnd));

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : source)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the destination vector after removing even numbers
    std::cout << "Destination vector after removing even numbers: ";
    for (const auto &num : destination)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
