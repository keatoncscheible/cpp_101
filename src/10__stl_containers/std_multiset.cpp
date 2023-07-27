// File: std_multiset.cpp
// Description: This C++ program demonstrates the std::multiset container from the C++ Standard
//  Template Library (STL). std::multiset is an ordered container that stores multiple occurrences
//  of elements, allowing efficient element insertion, removal, and search operations.

#include <iostream>
#include <set>

int main()
{
    // Declare a multiset of integers
    std::multiset<int> numbers;

    // Insert elements into the multiset
    numbers.insert(30);
    numbers.insert(10);
    numbers.insert(50);
    numbers.insert(20);
    numbers.insert(40);
    numbers.insert(30); // Duplicate elements are allowed in multiset

    // Print the elements of the multiset
    std::cout << "Elements of the multiset: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Count the occurrences of a specific element in the multiset
    int countElement = 30;
    std::cout << "Number of occurrences of " << countElement << ": " << numbers.count(countElement) << std::endl;

    // Find a range of elements in the multiset
    int lowerBound = 20;
    int upperBound = 40;
    auto lowerIt = numbers.lower_bound(lowerBound);
    auto upperIt = numbers.upper_bound(upperBound);

    std::cout << "Elements within the range [" << lowerBound << ", " << upperBound << "): ";
    for (auto it = lowerIt; it != upperIt; ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Erase all occurrences of a specific element from the multiset
    int removeElement = 30;
    numbers.erase(removeElement);

    // Print the elements of the multiset after removal
    std::cout << "Elements of the multiset after removal: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if the multiset is empty
    if (numbers.empty())
    {
        std::cout << "The multiset is empty." << std::endl;
    }
    else
    {
        std::cout << "The multiset is not empty." << std::endl;
    }

    // Clear the multiset
    numbers.clear();

    // Check if the multiset is empty after clearing
    if (numbers.empty())
    {
        std::cout << "The multiset is empty after clearing." << std::endl;
    }
    else
    {
        std::cout << "The multiset is not empty after clearing." << std::endl;
    }

    return 0;
}
