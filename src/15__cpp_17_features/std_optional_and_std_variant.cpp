// File: std_optional_and_std_variant.cpp
// Description: An illustrative example of using std::optional and std::variant in C++17.

#include <iostream>
#include <optional>
#include <string>
#include <variant>

// Function that returns an optional integer based on a condition
std::optional<int> getOptionalValue(bool condition)
{
    if (condition)
        return 42;
    else
        return std::nullopt; // Indicates no value
}

// Function that returns a variant of int and string based on a condition
std::variant<int, std::string> getValueVariant(bool condition)
{
    if (condition)
        return 42;
    else
        return "hello";
}

int main()
{
    // Using std::optional
    std::optional<int> optionalValue = getOptionalValue(true);
    if (optionalValue.has_value())
        std::cout << "Optional value: " << optionalValue.value() << std::endl;
    else
        std::cout << "Optional value not available." << std::endl;

    // Using std::variant
    std::variant<int, std::string> valueVariant = getValueVariant(false);
    if (std::holds_alternative<int>(valueVariant))
        std::cout << "Variant value: " << std::get<int>(valueVariant) << std::endl;
    else if (std::holds_alternative<std::string>(valueVariant))
        std::cout << "Variant value: " << std::get<std::string>(valueVariant) << std::endl;

    return 0;
}
