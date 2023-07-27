// File: overloading_arithmetic_comparison_and_assignment_operators.cpp
// Description: This program demonstrates overloading arithmetic, comparison, and assignment operators in a C++ class.

#include <iostream>

// Class declaration
class ComplexNumber
{
private:
    double real;
    double imaginary;

public:
    // Constructor
    ComplexNumber(double real, double imaginary) : real(real), imaginary(imaginary) {}

    // Overloading addition operator (+)
    ComplexNumber operator+(const ComplexNumber &other) const
    {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }

    // Overloading subtraction operator (-)
    ComplexNumber operator-(const ComplexNumber &other) const
    {
        return ComplexNumber(real - other.real, imaginary - other.imaginary);
    }

    // Overloading multiplication operator (*)
    ComplexNumber operator*(const ComplexNumber &other) const
    {
        double resultReal = real * other.real - imaginary * other.imaginary;
        double resultImaginary = real * other.imaginary + imaginary * other.real;
        return ComplexNumber(resultReal, resultImaginary);
    }

    // Overloading division operator (/)
    ComplexNumber operator/(const ComplexNumber &other) const
    {
        double denominator = other.real * other.real + other.imaginary * other.imaginary;
        double resultReal = (real * other.real + imaginary * other.imaginary) / denominator;
        double resultImaginary = (imaginary * other.real - real * other.imaginary) / denominator;
        return ComplexNumber(resultReal, resultImaginary);
    }

    // Overloading equality operator (==)
    bool operator==(const ComplexNumber &other) const
    {
        return (real == other.real) && (imaginary == other.imaginary);
    }

    // Overloading assignment operator (=)
    ComplexNumber &operator=(const ComplexNumber &other)
    {
        real = other.real;
        imaginary = other.imaginary;
        return *this;
    }

    // Member function to display the complex number
    void display() const
    {
        std::cout << "(" << real << " + " << imaginary << "i)" << std::endl;
    }
};

int main()
{
    // Create two complex numbers
    ComplexNumber num1(2.0, 3.0);
    ComplexNumber num2(1.0, 2.0);

    // Perform various operations using overloaded operators
    ComplexNumber sum = num1 + num2;
    ComplexNumber difference = num1 - num2;
    ComplexNumber product = num1 * num2;
    ComplexNumber quotient = num1 / num2;

    // Display the results
    std::cout << "Number 1: ";
    num1.display();
    std::cout << "Number 2: ";
    num2.display();

    std::cout << "Sum: ";
    sum.display();
    std::cout << "Difference: ";
    difference.display();
    std::cout << "Product: ";
    product.display();
    std::cout << "Quotient: ";
    quotient.display();

    // Testing the equality operator
    std::cout << "Are Number 1 and Number 2 equal? " << (num1 == num2 ? "Yes" : "No") << std::endl;

    // Testing the assignment operator
    ComplexNumber num3(5.0, 6.0);
    std::cout << "Number 3 (Before assignment): ";
    num3.display();
    num3 = num2;
    std::cout << "Number 3 (After assignment): ";
    num3.display();

    return 0;
}
