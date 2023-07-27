// File: std_unordered_multimap.cpp
// Description: An illustrative example of the std::unordered_multimap container in C++ Standard
//  Template Library (STL). std::unordered_multimap is an unordered container that stores elements
//  as key-value pairs and allows duplicate keys.

#include <iostream>
#include <unordered_map>

int main()
{
    // Declare an unordered_multimap with string keys and integer values
    std::unordered_multimap<std::string, int> scores;

    // Insert elements into the unordered_multimap
    scores.insert(std::make_pair("Alice", 85));
    scores.insert(std::make_pair("Bob", 90));
    scores.insert(std::make_pair("Charlie", 78));
    scores.insert(std::make_pair("Alice", 92)); // Insert duplicate key "Alice" with value 92

    // Print the elements of the unordered_multimap
    std::cout << "Elements of the unordered_multimap:" << std::endl;
    for (const auto &pair : scores)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Find all elements with the key "Alice"
    std::string searchName = "Alice";
    auto range = scores.equal_range(searchName);
    std::cout << "Scores for " << searchName << ":" << std::endl;
    for (auto it = range.first; it != range.second; ++it)
    {
        std::cout << it->second << std::endl;
    }

    // Erase all elements with the key "Alice"
    scores.erase(searchName);

    // Print the elements of the unordered_multimap after removal
    std::cout << "Elements of the unordered_multimap after removal:" << std::endl;
    for (const auto &pair : scores)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Check if a key exists in the unordered_multimap
    std::string checkName = "Bob";
    if (scores.find(checkName) != scores.end())
    {
        std::cout << checkName << " exists in the unordered_multimap." << std::endl;
    }
    else
    {
        std::cout << checkName << " does not exist in the unordered_multimap." << std::endl;
    }

    // Check if the unordered_multimap is empty
    if (scores.empty())
    {
        std::cout << "The unordered_multimap is empty." << std::endl;
    }
    else
    {
        std::cout << "The unordered_multimap is not empty." << std::endl;
    }

    // Clear the unordered_multimap
    scores.clear();

    // Check if the unordered_multimap is empty after clearing
    if (scores.empty())
    {
        std::cout << "The unordered_multimap is empty after clearing." << std::endl;
    }
    else
    {
        std::cout << "The unordered_multimap is not empty after clearing." << std::endl;
    }

    return 0;
}
