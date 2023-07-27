// File: std_search_n.cpp
// Description: This C++ program demonstrates the usage of the std::search_n algorithm from the C++ Standard Library.
//              The std::search_n algorithm is used to find a subsequence of a specific length that appears consecutively
//              in a given range.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 4, 4, 5, 6, 7, 8, 9};

    // Define the subsequence to search for
    int target = 4;
    int count = 3; // Find three consecutive occurrences of the target

    // Use std::search_n to find the first occurrence of the subsequence
    auto foundPosition = std::search_n(numbers.begin(), numbers.end(), count, target);

    // Check if the subsequence was found
    if (foundPosition != numbers.end())
    {
        // Calculate the index of the found subsequence
        int index = std::distance(numbers.begin(), foundPosition);

        std::cout << "Subsequence of " << count << " consecutive " << target << " found at index " << index << std::endl;
    }
    else
    {
        std::cout << "Subsequence not found." << std::endl;
    }

    return 0;
}
