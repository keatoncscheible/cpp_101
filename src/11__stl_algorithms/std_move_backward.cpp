// File: std_move_backward.cpp
// Description: This C++ program demonstrates the usage of the std::move_backward algorithm from the C++ Standard Library.
//              The std::move_backward algorithm is used to transfer the contents of one container to another in reverse order efficiently.
//              It is typically used with move semantics to avoid unnecessary copies of elements.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> source = {1, 2, 3, 4, 5};

    // Create another vector to move the elements from the source vector in reverse order
    std::vector<int> destination(source.size());

    // Use std::move_backward to transfer the elements from the source vector to the destination vector in reverse order
    std::move_backward(source.begin(), source.end(), destination.end());

    // Note that after moving, the source vector is in a valid but unspecified state

    // Print the original vector (source is empty after moving)
    std::cout << "Original vector (source): ";
    for (const auto &num : source)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the destination vector with the moved elements in reverse order
    std::cout << "Moved vector (destination): ";
    for (const auto &num : destination)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
