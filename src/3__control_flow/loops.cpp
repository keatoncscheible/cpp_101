// File: loops.cpp
// Description: This program demonstrates the use of different types of loops in C++.

#include <iostream>

int main()
{
    // Example of a for loop
    std::cout << "Example of a for loop:" << std::endl;
    for (int i = 1; i <= 5; ++i)
    {
        std::cout << "Iteration " << i << std::endl;
    }

    // Example of a while loop
    std::cout << "\nExample of a while loop:" << std::endl;
    int count = 1;
    while (count <= 5)
    {
        std::cout << "Count: " << count << std::endl;
        ++count;
    }

    // Example of a do-while loop
    std::cout << "\nExample of a do-while loop:" << std::endl;
    int num = 1;
    do
    {
        std::cout << "Number: " << num << std::endl;
        ++num;
    } while (num <= 5);

    return 0;
}
