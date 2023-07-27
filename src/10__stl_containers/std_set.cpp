// File: std_set.cpp
// Description: This C++ program demonstrates the std::set container from the C++ Standard Template
//  Library (STL). std::set is an ordered container that stores unique elements, allowing efficient
//  element insertion, removal, and search operations.

#include <iostream>
#include <set>

int main()
{
    // Declare a set of integers
    std::set<int> numbers;

    // Insert elements into the set
    numbers.insert(30);
    numbers.insert(10);
    numbers.insert(50);
    numbers.insert(20);
    numbers.insert(40);

    // Print the elements of the set
    std::cout << "Elements of the set: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if an element exists in the set
    int searchElement = 40;
    if (numbers.count(searchElement) > 0)
    {
        std::cout << searchElement << " exists in the set." << std::endl;
    }
    else
    {
        std::cout << searchElement << " does not exist in the set." << std::endl;
    }

    // Find an element in the set
    int findElement = 20;
    auto it = numbers.find(findElement);
    if (it != numbers.end())
    {
        std::cout << "Element " << findElement << " found in the set." << std::endl;
    }
    else
    {
        std::cout << "Element " << findElement << " not found in the set." << std::endl;
    }

    // Erase an element from the set
    int removeElement = 30;
    numbers.erase(removeElement);

    // Print the elements of the set after removal
    std::cout << "Elements of the set after removal: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if the set is empty
    if (numbers.empty())
    {
        std::cout << "The set is empty." << std::endl;
    }
    else
    {
        std::cout << "The set is not empty." << std::endl;
    }

    // Clear the set
    numbers.clear();

    // Check if the set is empty after clearing
    if (numbers.empty())
    {
        std::cout << "The set is empty after clearing." << std::endl;
    }
    else
    {
        std::cout << "The set is not empty after clearing." << std::endl;
    }

    return 0;
}
