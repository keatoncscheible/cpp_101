// File: std_push_heap.cpp
// Description: This C++ program demonstrates the usage of the std::push_heap algorithm from the C++ Standard Library.
//              The std::push_heap algorithm is used to insert an element into a max heap data structure.
//              A max heap is a binary tree where the value of each node is greater than or equal to the values of its children.
//              In this example, we create a vector of integers and use std::make_heap to convert it into a max heap.
//              Then, we add a new element to the vector and use std::push_heap to adjust the heap to include the new element.
//              The std::push_heap function takes two iterators: first and last.
//              It assumes that the range [first, last-1) is a valid max heap, and it extends the range to include the new element.
//              After the operation, the largest element in the range will be at the front of the container (first element).

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

    // Add a new element to the vector
    data.push_back(12);

    // Adjust the heap to include the new element using std::push_heap
    std::push_heap(data.begin(), data.end());

    // Print the vector after adding the new element and adjusting the heap
    std::cout << "Max heap data after push_heap: ";
    for (const auto &num : data)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Now, the largest element (root of the max heap) is at the front of the container
    int maxElement = data.front();
    std::cout << "Largest element (root of the max heap): " << maxElement << std::endl;

    return 0;
}
