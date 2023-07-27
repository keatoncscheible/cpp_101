// File: std_forward_list.cpp
// Description: This C++ program demonstrates various operations on a std::forward_list container
//  from the C++ Standard Template Library (STL). A std::forward_list is a singly linked list that
//  allows efficient insertion and removal of elements at the front.

#include <forward_list>
#include <iostream>

int main()
{
    // Declare a forward_list of integers
    std::forward_list<int> numbers;

    // Add elements to the forward_list using push_front()
    numbers.push_front(10);
    numbers.push_front(20);
    numbers.push_front(30);

    // Accessing elements of the forward_list using range-based for loop
    std::cout << "Elements of the forward_list: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Inserting elements at a specific position in the forward_list
    auto it = numbers.begin();
    numbers.insert_after(it, 15);

    // Print the modified forward_list
    std::cout << "Forward_list after inserting 15: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Remove elements from the forward_list using erase_after()
    auto it_remove = numbers.begin();
    std::advance(it_remove, 2); // Move iterator two positions forward
    numbers.erase_after(it_remove);

    // Print the forward_list after removing an element
    std::cout << "Forward_list after removing the second element: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if the forward_list is empty
    if (numbers.empty())
    {
        std::cout << "The forward_list is empty." << std::endl;
    }
    else
    {
        std::cout << "The forward_list is not empty." << std::endl;
    }

    // Get the maximum number of elements that can be held by the forward_list
    std::cout << "Max size of the forward_list: " << numbers.max_size() << std::endl;

    // Clear the forward_list
    numbers.clear();

    // Check if the forward_list is empty after clearing
    if (numbers.empty())
    {
        std::cout << "The forward_list is empty after clearing." << std::endl;
    }
    else
    {
        std::cout << "The forward_list is not empty after clearing." << std::endl;
    }

    return 0;
}
