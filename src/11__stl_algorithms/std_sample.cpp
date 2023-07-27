// File: std_sample.cpp
// Description: This C++ program demonstrates the usage of the std::sample algorithm from the C++ Standard Library.
//              The std::sample algorithm is used to randomly sample elements from a range and store them in another container.

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

    // Create a new vector to store the sampled elements
    std::vector<int> sampledNumbers(5);

    // Create a custom random number generator
    std::random_device rd;     // Obtain a random seed from hardware
    std::mt19937 engine(rd()); // Standard Mersenne Twister engine

    // Use std::sample to randomly sample 5 elements from the original vector
    std::sample(numbers.begin(), numbers.end(), sampledNumbers.begin(), 5, engine);

    // Print the sampled vector
    std::cout << "Sampled vector: ";
    for (const auto &num : sampledNumbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
