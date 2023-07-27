// File: std_map.cpp
// Description: This C++ program demonstrates the use of std::map container in the C++ Standard
//  Template Library (STL). A std::map is an associative container that stores key-value pairs in a
//  sorted order based on the keys.

#include <iostream>
#include <map>

int main()
{
    // Declare a map with string keys and integer values
    std::map<std::string, int> ages;

    // Insert elements into the map
    ages["Alice"] = 30;   // Insert key "Alice" with value 30
    ages["Bob"] = 25;     // Insert key "Bob" with value 25
    ages["Charlie"] = 35; // Insert key "Charlie" with value 35
    ages["David"] = 22;   // Insert key "David" with value 22
    ages["Alice"] = 28;   // Update value for the existing key "Alice" to 28

    // Print the elements of the map
    std::cout << "Elements of the map:" << std::endl;
    for (const auto &pair : ages)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Find an element in the map
    std::string searchName = "Bob";
    auto it = ages.find(searchName);
    if (it != ages.end())
    {
        std::cout << "Age of " << searchName << ": " << it->second << std::endl;
    }
    else
    {
        std::cout << searchName << " not found in the map." << std::endl;
    }

    // Erase an element from the map
    ages.erase("Charlie");

    // Print the elements of the map after removal
    std::cout << "Elements of the map after removal:" << std::endl;
    for (const auto &pair : ages)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Check if a key exists in the map
    std::string checkName = "David";
    if (ages.count(checkName) > 0)
    {
        std::cout << checkName << " exists in the map." << std::endl;
    }
    else
    {
        std::cout << checkName << " does not exist in the map." << std::endl;
    }

    // Check if the map is empty
    if (ages.empty())
    {
        std::cout << "The map is empty." << std::endl;
    }
    else
    {
        std::cout << "The map is not empty." << std::endl;
    }

    // Clear the map
    ages.clear();

    // Check if the map is empty after clearing
    if (ages.empty())
    {
        std::cout << "The map is empty after clearing." << std::endl;
    }
    else
    {
        std::cout << "The map is not empty after clearing." << std::endl;
    }

    return 0;
}
