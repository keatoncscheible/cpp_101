// File: std_remove_if.cpp
// Description: This C++ program demonstrates the usage of the std::remove_if algorithm from the C++ Standard Library.
//              The std::remove_if algorithm is used to remove elements from a container that satisfy a certain condition.
//              However, it does not actually delete elements from the container. Instead, it moves the elements to
//              the end of the container and returns an iterator to the new "end" of the container. The actual
//              erasing of elements is done using the erase method.

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
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Use std::remove_if to remove all even numbers
    auto newEnd = std::remove_if(numbers.begin(), numbers.end(), isEven);

    // Print the vector after removing even numbers
    std::cout << "Vector after removing even numbers: ";
    for (auto it = numbers.begin(); it != newEnd; ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Erase the "removed" elements from the vector using the erase method
    numbers.erase(newEnd, numbers.end());

    // Print the final vector after erasing the "removed" elements
    std::cout << "Final vector after erasing removed elements: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
