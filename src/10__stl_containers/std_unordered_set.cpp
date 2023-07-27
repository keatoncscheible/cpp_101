// File: std_unordered_set.cpp
// Description: An illustrative example of the std::unordered_set container in C++ Standard
//  Template Library (STL). std::unordered_set is an unordered container that stores unique
//  elements and provides fast lookup using a hash table.

#include <iostream>
#include <unordered_set>

int main()
{
    // Declare an unordered_set of integers
    std::unordered_set<int> numbers;

    // Insert elements into the unordered_set
    numbers.insert(30);
    numbers.insert(10);
    numbers.insert(50);
    numbers.insert(20);
    numbers.insert(40);

    // Print the elements of the unordered_set
    std::cout << "Elements of the unordered_set: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if an element exists in the unordered_set
    int searchElement = 40;
    if (numbers.count(searchElement) > 0)
    {
        std::cout << searchElement << " exists in the unordered_set." << std::endl;
    }
    else
    {
        std::cout << searchElement << " does not exist in the unordered_set." << std::endl;
    }

    // Erase an element from the unordered_set
    int removeElement = 30;
    numbers.erase(removeElement);

    // Print the elements of the unordered_set after removal
    std::cout << "Elements of the unordered_set after removal: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if the unordered_set is empty
    if (numbers.empty())
    {
        std::cout << "The unordered_set is empty." << std::endl;
    }
    else
    {
        std::cout << "The unordered_set is not empty." << std::endl;
    }

    return 0;
}
