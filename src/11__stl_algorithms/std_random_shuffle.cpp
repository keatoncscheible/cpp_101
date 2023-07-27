// File: std_random_shuffle.cpp
// Description: This C++ program demonstrates the usage of the std::random_shuffle algorithm from the C++ Standard Library.
//              The std::random_shuffle algorithm is used to randomly shuffle the elements of a range.

#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Print the original vector
    std::cout << "Original vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Use std::random_shuffle to shuffle the elements randomly
    std::random_device rd;     // Obtain a random seed from hardware
    std::mt19937 engine(rd()); // Standard Mersenne Twister engine
    std::shuffle(numbers.begin(), numbers.end(), engine);

    // Print the vector after shuffling
    std::cout << "Shuffled vector: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
