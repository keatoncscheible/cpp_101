// File: std_unordered_multiset.cpp
// Description: An illustrative example of the std::unordered_multiset container in C++ Standard
//  Template Library (STL). std::unordered_multiset is an unordered container that allows duplicate
//  elements and provides fast lookup using a hash table.

#include <iostream>
#include <unordered_set>

int main()
{
    // Declare an unordered_multiset of integers
    std::unordered_multiset<int> numbers;

    // Insert elements into the unordered_multiset
    numbers.insert(30);
    numbers.insert(10);
    numbers.insert(50);
    numbers.insert(20);
    numbers.insert(40);
    numbers.insert(30); // Duplicate elements are allowed in the unordered_multiset

    // Print the elements of the unordered_multiset
    std::cout << "Elements of the unordered_multiset: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Count the occurrences of a specific element in the unordered_multiset
    int countElement = 30;
    std::cout << "Number of occurrences of " << countElement << ": " << numbers.count(countElement) << std::endl;

    // Erase all occurrences of a specific element from the unordered_multiset
    int removeElement = 30;
    numbers.erase(removeElement);

    // Print the elements of the unordered_multiset after removal
    std::cout << "Elements of the unordered_multiset after removal: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if the unordered_multiset is empty
    if (numbers.empty())
    {
        std::cout << "The unordered_multiset is empty." << std::endl;
    }
    else
    {
        std::cout << "The unordered_multiset is not empty." << std::endl;
    }

    return 0;
}
