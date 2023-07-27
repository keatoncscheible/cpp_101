// File: std_multimap.cpp
// Description: This C++ program demonstrates the use of std::multimap container
//  from the C++ Standard Template Library (STL). A std::multimap is an associative
//  container that allows multiple key-value pairs with the same key. The keys are
//  sorted in ascending order.

#include <iostream>
#include <map>

int main()
{
    // Declare a multimap with string keys and integer values
    std::multimap<std::string, int> scores;

    // Insert elements into the multimap
    scores.insert(std::make_pair("Alice", 85));
    scores.insert(std::make_pair("Bob", 90));
    scores.insert(std::make_pair("Charlie", 78));
    scores.insert(std::make_pair("Alice", 92)); // Multimap allows duplicate keys

    // Print the elements of the multimap
    std::cout << "Elements of the multimap:" << std::endl;
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

    // Print the elements of the multimap after removal
    std::cout << "Elements of the multimap after removal:" << std::endl;
    for (const auto &pair : scores)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Check if a key exists in the multimap
    std::string checkName = "Bob";
    if (scores.find(checkName) != scores.end())
    {
        std::cout << checkName << " exists in the multimap." << std::endl;
    }
    else
    {
        std::cout << checkName << " does not exist in the multimap." << std::endl;
    }

    // Check if the multimap is empty
    if (scores.empty())
    {
        std::cout << "The multimap is empty." << std::endl;
    }
    else
    {
        std::cout << "The multimap is not empty." << std::endl;
    }

    // Clear the multimap
    scores.clear();

    // Check if the multimap is empty after clearing
    if (scores.empty())
    {
        std::cout << "The multimap is empty after clearing." << std::endl;
    }
    else
    {
        std::cout << "The multimap is not empty after clearing." << std::endl;
    }

    return 0;
}
