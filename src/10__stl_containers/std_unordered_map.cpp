// File: std_unordered_map.cpp
// Description: An illustrative example of the std::unordered_map container in C++ Standard
//  Template Library (STL). std::unordered_map is an unordered container that stores elements as
//  key-value pairs and provides fast lookup using a hash table.

#include <iostream>
#include <unordered_map>

int main()
{
    // Declare an unordered_map with string keys and integer values
    std::unordered_map<std::string, int> ages;

    // Insert elements into the unordered_map
    ages["Alice"] = 30;   // Insert key "Alice" with value 30
    ages["Bob"] = 25;     // Insert key "Bob" with value 25
    ages["Charlie"] = 35; // Insert key "Charlie" with value 35
    ages["David"] = 22;   // Insert key "David" with value 22
    ages["Alice"] = 28;   // Update value for the existing key "Alice" to 28

    // Print the elements of the unordered_map
    std::cout << "Elements of the unordered_map:" << std::endl;
    for (const auto &pair : ages)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Find an element in the unordered_map
    std::string searchName = "Bob";
    auto it = ages.find(searchName);
    if (it != ages.end())
    {
        std::cout << "Age of " << searchName << ": " << it->second << std::endl;
    }
    else
    {
        std::cout << searchName << " not found in the unordered_map." << std::endl;
    }

    // Erase an element from the unordered_map
    ages.erase("Charlie");

    // Print the elements of the unordered_map after removal
    std::cout << "Elements of the unordered_map after removal:" << std::endl;
    for (const auto &pair : ages)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Check if a key exists in the unordered_map
    std::string checkName = "David";
    if (ages.count(checkName) > 0)
    {
        std::cout << checkName << " exists in the unordered_map." << std::endl;
    }
    else
    {
        std::cout << checkName << " does not exist in the unordered_map." << std::endl;
    }

    // Check if the unordered_map is empty
    if (ages.empty())
    {
        std::cout << "The unordered_map is empty." << std::endl;
    }
    else
    {
        std::cout << "The unordered_map is not empty." << std::endl;
    }

    // Clear the unordered_map
    ages.clear();

    // Check if the unordered_map is empty after clearing
    if (ages.empty())
    {
        std::cout << "The unordered_map is empty after clearing." << std::endl;
    }
    else
    {
        std::cout << "The unordered_map is not empty after clearing." << std::endl;
    }

    return 0;
}
