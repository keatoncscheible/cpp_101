// File: std_count.cpp
// Description: This C++ program demonstrates the usage of the std::count algorithm from the C++ Standard Library.
//              The std::count algorithm is used to count the occurrences of a specific value in a range.
//              In this example, we create a vector of integers and use std::count to count the occurrences of a specific value in the vector.
//              The std::count function takes two iterators: first and last, and a value to count.
//              It returns the number of occurrences of the value in the range [first, last).

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 2, 3, 2, 4, 2, 5, 2};

    // Print the vector
    std::cout << "Vector elements: ";
    for (const auto &num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Count the occurrences of the value 2 using std::count
    int countOfTwo = std::count(numbers.begin(), numbers.end(), 2);

    // Print the result
    std::cout << "Occurrences of value 2: " << countOfTwo << std::endl;

    return 0;
}
