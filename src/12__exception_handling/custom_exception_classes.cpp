// File: custom_exception_classes.cpp
// Description: An illustrative example of creating and using custom exception classes in C++.

#include <exception>
#include <iostream>
#include <string>

// Custom exception class for invalid inputs
class InvalidInputException : public std::exception
{
public:
    // Constructor with an error message
    InvalidInputException(const std::string &message) : errorMessage(message) {}

    // Overridden what() function to retrieve the error message
    const char *what() const noexcept override
    {
        return errorMessage.c_str();
    }

private:
    std::string errorMessage;
};

// Function to calculate the area of a rectangle
int CalculateRectangleArea(int length, int width)
{
    if (length <= 0 || width <= 0)
    {
        // Throw a custom exception if inputs are invalid
        throw InvalidInputException("Invalid input: length and width must be positive integers.");
    }

    return length * width;
}

int main()
{
    try
    {
        int length = 5;
        int width = -2;

        int area = CalculateRectangleArea(length, width);
        std::cout << "Area of the rectangle: " << area << std::endl;
    }
    catch (const InvalidInputException &ex)
    {
        // Catch and handle the custom exception
        std::cout << "Exception occurred: " << ex.what() << std::endl;
    }
    catch (const std::exception &ex)
    {
        // Catch other standard exceptions if any
        std::cout << "Standard exception occurred: " << ex.what() << std::endl;
    }
    catch (...)
    {
        // Catch any other unknown exceptions that might occur
        std::cout << "Unknown exception occurred." << std::endl;
    }

    return 0;
}
