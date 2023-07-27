// File: std_search.cpp
// Description: This C++ program demonstrates the usage of the std::search algorithm from the C++ Standard Library.
//              The std::search algorithm is used to find the first occurrence of a subsequence within a given range.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Create a subsequence to search for
    std::vector<int> subsequence = {3, 4, 5};

    // Use std::search to find the first occurrence of the subsequence
    auto foundPosition = std::search(numbers.begin(), numbers.end(), subsequence.begin(), subsequence.end());

    // Check if the subsequence was found
    if (foundPosition != numbers.end())
    {
        // Calculate the index of the found subsequence
        int index = std::distance(numbers.begin(), foundPosition);

        std::cout << "Subsequence found at index " << index << std::endl;
    }
    else
    {
        std::cout << "Subsequence not found." << std::endl;
    }

    return 0;
}
