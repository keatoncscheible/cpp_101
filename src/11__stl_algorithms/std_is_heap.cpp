// File: std_is_heap.cpp
// Description: This C++ program demonstrates the usage of the std::is_heap algorithm from the C++ Standard Library.
//              The std::is_heap algorithm is used to check whether a range of elements forms a valid max heap.
//              A max heap is a binary tree where the value of each node is greater than or equal to the values of its children.
//              In this example, we create a vector of integers and use std::make_heap to convert it into a max heap.
//              Then, we use std::is_heap to check whether the vector indeed represents a valid max heap.
//              The std::is_heap function takes two iterators: first and last.
//              It returns true if the elements in the range [first, last) form a valid max heap, and false otherwise.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> data = {9, 7, 5, 6, 3, 4, 1, 2, 8};

    // Print the vector
    std::cout << "Vector data: ";
    for (const auto &num : data)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Convert the vector into a max heap using std::make_heap
    std::make_heap(data.begin(), data.end());

    // Check if the vector forms a valid max heap using std::is_heap
    if (std::is_heap(data.begin(), data.end()))
    {
        std::cout << "The vector forms a valid max heap." << std::endl;
    }
    else
    {
        std::cout << "The vector does not form a valid max heap." << std::endl;
    }

    return 0;
}
