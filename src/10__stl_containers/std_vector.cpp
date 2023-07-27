// File: vector_operations.cpp
// Description: This C++ program demonstrates various operations on a std::vector container from
//  the C++ Standard Template Library (STL). A std::vector is a dynamic array that allows us to
//  store and manipulate a collection of integers efficiently.

#include <iostream>
#include <vector>

int main()
{
    // Declare a vector of integers
    std::vector<int> numbers;

    // Add elements to the vector using push_back()
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Accessing elements of the vector using operator[]
    std::cout << "Elements of the vector: ";
    for (size_t i = 0; i < numbers.size(); ++i)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Use the range-based for loop to access elements
    std::cout << "Elements using range-based for loop: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Accessing elements using iterator
    std::cout << "Elements using iterator: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Check if the vector is empty
    if (numbers.empty())
    {
        std::cout << "The vector is empty." << std::endl;
    }
    else
    {
        std::cout << "The vector is not empty." << std::endl;
    }

    // Get the size and capacity of the vector
    std::cout << "Size of the vector: " << numbers.size() << std::endl;
    std::cout << "Capacity of the vector: " << numbers.capacity() << std::endl;

    // Resize the vector
    numbers.resize(5); // The additional elements are default-initialized (for int, they become 0)

    // Modify elements after resizing
    numbers[3] = 40;
    numbers[4] = 50;

    // Print the modified vector
    std::cout << "Modified elements after resizing: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Shrinking the vector to fit its elements
    numbers.shrink_to_fit();

    // Print the size and capacity after shrinking
    std::cout << "Size after shrinking: " << numbers.size() << std::endl;
    std::cout << "Capacity after shrinking: " << numbers.capacity() << std::endl;

    // Clear the vector
    numbers.clear();

    // Check if the vector is empty after clearing
    if (numbers.empty())
    {
        std::cout << "The vector is empty after clearing." << std::endl;
    }
    else
    {
        std::cout << "The vector is not empty after clearing." << std::endl;
    }

    return 0;
}
