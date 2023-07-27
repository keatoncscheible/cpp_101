// File: working_with_arrays.cpp
// Description: This program demonstrates various operations with arrays in C++.

#include <iostream>

int main()
{
    // Declare and initialize an array of integers
    int myArray[5] = {1, 2, 3, 4, 5};

    // Accessing array elements using index
    std::cout << "Array Elements: ";
    for (int i = 0; i < 5; i++)
    {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Modifying array elements
    myArray[2] = 10; // Change the third element to 10

    // Accessing the modified array elements
    std::cout << "Modified Array Elements: ";
    for (int i = 0; i < 5; i++)
    {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Calculating the sum of array elements
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += myArray[i];
    }
    std::cout << "Sum of Array Elements: " << sum << std::endl;

    // Finding the maximum element in the array
    int maxElement = myArray[0];
    for (int i = 1; i < 5; i++)
    {
        if (myArray[i] > maxElement)
        {
            maxElement = myArray[i];
        }
    }
    std::cout << "Maximum Element in the Array: " << maxElement << std::endl;

    return 0;
}
