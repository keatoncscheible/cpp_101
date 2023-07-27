// File: std_remove.cpp
// Description: This C++ program demonstrates the usage of the std::remove algorithm from the C++ Standard Library.
//              The std::remove algorithm is used to remove elements from a container that satisfy a certain value.
//              However, it does not actually delete elements from the container. Instead, it moves the elements to
//              the end of the container and returns an iterator to the new "end" of the container. The actual
//              erasing of elements is done using the erase method.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers with some duplicate values
    std::vector<int> numbers = {1, 2, 3, 4, 3, 5, 6, 3, 7, 8, 3, 9};

    // Use std::remove to remove all occurrences of the value 3
    auto newEnd = std::remove(numbers.begin(), numbers.end(), 3);

    // Print the vector after removing the value 3
    std::cout << "Vector after removing 3: ";
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
