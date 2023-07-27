// File: std_pop_heap.cpp
// Description: This C++ program demonstrates the usage of the std::pop_heap algorithm from the C++ Standard Library.
//              The std::pop_heap algorithm is used to remove the largest element (root) from a max heap data structure.
//              A max heap is a binary tree where the value of each node is greater than or equal to the values of its children.
//              In this example, we create a vector of integers and use std::make_heap to convert it into a max heap.
//              Then, we remove the largest element from the heap using std::pop_heap, and store it at the end of the container.
//              After removing the element, the range [first, last-1) is no longer a valid max heap.
//              To restore the max heap, we use std::push_heap on the reduced range [first, last-1).
//              The std::pop_heap function takes two iterators: first and last.
//              It assumes that the range [first, last) is a valid max heap, and it moves the largest element to the end of the container.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> data = {7, 3, 1, 8, 4, 10, 2, 6, 9, 5};

    // Print the unsorted vector
    std::cout << "Unsorted data: ";
    for (const auto &num : data)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Convert the vector into a max heap using std::make_heap
    std::make_heap(data.begin(), data.end());

    // Print the vector after converting it into a max heap
    std::cout << "Max heap data: ";
    for (const auto &num : data)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Remove the largest element (root) from the heap using std::pop_heap
    std::pop_heap(data.begin(), data.end());

    // Get the largest element (which is now at the end of the container)
    int largestElement = data.back();

    // Print the vector after removing the largest element
    std::cout << "Max heap data after pop_heap: ";
    for (const auto &num : data)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Print the largest element that was removed from the heap
    std::cout << "Largest element removed from the heap: " << largestElement << std::endl;

    return 0;
}
