// File: try_catch_blocks.cpp
// Description: An illustrative example of try-catch blocks in C++ for exception handling.

#include <iostream>

int main()
{
    try
    {
        int numerator = 10;
        int denominator = 0;

        // Attempt to divide numerator by denominator
        int result = numerator / denominator;

        // This line will not be executed if an exception occurs during division
        std::cout << "Result of division: " << result << std::endl;
    }
    catch (const std::exception &ex)
    {
        // Catch and handle the exception
        std::cout << "Exception occurred: " << ex.what() << std::endl;
    }
    catch (...)
    {
        // Catch any other unknown exceptions that might occur
        std::cout << "Unknown exception occurred." << std::endl;
    }

    return 0;
}
