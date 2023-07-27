// File: lambda_expressions.cpp
// Description: An illustrative example of using lambda expressions in C++11 to sort a vector in
//  ascending order and find the sum of even numbers.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // Declare a vector of integers
    std::vector<int> numbers = {10, 25, 5, 15, 30};

    // Use a lambda expression to sort the vector in ascending order
    std::sort(numbers.begin(), numbers.end(), [](int a, int b)
              { return a < b; });

    // Print the sorted elements of the vector using a lambda expression
    std::cout << "Sorted elements of the vector in ascending order: ";
    for (int num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Use another lambda expression to find the sum of even numbers in the vector
    int sumOfEvenNumbers = 0;
    std::for_each(numbers.begin(), numbers.end(), [&](int num)
                  {
        if (num % 2 == 0)
        {
            sumOfEvenNumbers += num;
        } });

    // Print the sum of even numbers using a lambda expression
    std::cout << "Sum of even numbers in the vector: " << sumOfEvenNumbers << std::endl;

    return 0;
}
