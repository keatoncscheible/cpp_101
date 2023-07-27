// File: std_deque.cpp
// Description: This C++ program demonstrates various operations on a std::deque container from the
//  C++ Standard Template Library (STL). A std::deque (short for double-ended queue) is a dynamic
//  array-like container that allows efficient insertion and deletion of elements at both ends.

#include <algorithm> // Required for std::reverse
#include <deque>
#include <iostream>

int main()
{
    // Declare a deque of integers
    std::deque<int> numbers;

    // Add elements to the deque using push_back()
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Print the original deque
    std::cout << "Original deque: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Reverse the elements in the deque using std::reverse from the <algorithm> header
    std::reverse(numbers.begin(), numbers.end());

    // Print the deque after reversing
    std::cout << "Deque after reversing: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Check if the deque is empty
    if (numbers.empty())
    {
        std::cout << "The deque is empty." << std::endl;
    }
    else
    {
        std::cout << "The deque is not empty." << std::endl;
    }

    // Get the maximum number of elements that can be held by the deque
    std::cout << "Max size of the deque: " << numbers.max_size() << std::endl;

    // Clear the deque
    numbers.clear();

    // Check if the deque is empty after clearing
    if (numbers.empty())
    {
        std::cout << "The deque is empty after clearing." << std::endl;
    }
    else
    {
        std::cout << "The deque is not empty after clearing." << std::endl;
    }

    return 0;
}
