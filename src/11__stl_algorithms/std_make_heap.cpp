// File: std_make_heap.cpp
// Description: This C++ program demonstrates the usage of the std::make_heap algorithm from the C++ Standard Library.
//              The std::make_heap algorithm is used to convert a range of elements into a max heap data structure.
//              A max heap is a binary tree where the value of each node is greater than or equal to the values of its children.
//              In this example, we create a vector of integers and use std::make_heap to convert it into a max heap.
//              The std::make_heap function takes two iterators: first and last.
//              It rearranges the elements in the range [first, last) to form a valid max heap.
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

    // Now, the largest element (root of the max heap) is at the front of the container
    int maxElement = data.front();
    std::cout << "Largest element (root of the max heap): " << maxElement << std::endl;

    return 0;
}
