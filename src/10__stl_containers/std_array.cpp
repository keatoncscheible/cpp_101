// File: std_array.cpp
// Description: This C++ program demonstrates the std::array container from the C++ Standard
//  Template Library (STL). std::array is an array-like container with a fixed size that provides
//  various array-related functionalities and benefits from array performance.

#include <array>
#include <iostream>

int main()
{
    // Declare a fixed-size array of integers with size 5
    std::array<int, 5> numbers = {10, 20, 30, 40, 50};

    // Print the elements of the array
    std::cout << "Elements of the array: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Get the size of the array
    std::cout << "Size of the array: " << numbers.size() << std::endl;

    // Access elements using the [] operator
    std::cout << "Element at index 2: " << numbers[2] << std::endl;

    // Access elements using the at() function (with bounds checking)
    std::cout << "Element at index 3 (using at()): " << numbers.at(3) << std::endl;

    // Access the first and last elements
    std::cout << "First element: " << numbers.front() << std::endl;
    std::cout << "Last element: " << numbers.back() << std::endl;

    // Check if the array is empty
    if (numbers.empty())
    {
        std::cout << "The array is empty." << std::endl;
    }
    else
    {
        std::cout << "The array is not empty." << std::endl;
    }

    return 0;
}
