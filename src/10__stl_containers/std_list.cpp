// File: std_list.cpp
// Description: This C++ program demonstrates various operations on a std::list container from the
//  C++ Standard Template Library (STL). A std::list is a doubly-linked list that allows us to
//  efficiently add, remove, and modify elements at both ends and at specific positions within the
//  list.

#include <algorithm> // Required for std::find
#include <iostream>
#include <list>

int main()
{
    // Declare a list of integers
    std::list<int> numbers;

    // Add elements to the list using push_back() and push_front()
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_front(5);

    // Accessing elements of the list using range-based for loop
    std::cout << "Elements of the list: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Inserting elements at a specific position in the list
    auto it = std::find(numbers.begin(), numbers.end(), 20);
    if (it != numbers.end())
    {
        numbers.insert(it, 15);
    }

    // Print the modified list
    std::cout << "List after inserting 15: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Remove elements from the list using erase()
    auto it_remove = std::find(numbers.begin(), numbers.end(), 10);
    if (it_remove != numbers.end())
    {
        numbers.erase(it_remove);
    }

    // Print the list after removing an element
    std::cout << "List after removing 10: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if the list is empty
    if (numbers.empty())
    {
        std::cout << "The list is empty." << std::endl;
    }
    else
    {
        std::cout << "The list is not empty." << std::endl;
    }

    // Get the size of the list
    std::cout << "Size of the list: " << numbers.size() << std::endl;

    // Reverse the list
    numbers.reverse();

    // Print the reversed list
    std::cout << "Reversed list: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sort the list
    numbers.sort();

    // Print the sorted list
    std::cout << "Sorted list: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Clear the list
    numbers.clear();

    // Check if the list is empty after clearing
    if (numbers.empty())
    {
        std::cout << "The list is empty after clearing." << std::endl;
    }
    else
    {
        std::cout << "The list is not empty after clearing." << std::endl;
    }

    return 0;
}
