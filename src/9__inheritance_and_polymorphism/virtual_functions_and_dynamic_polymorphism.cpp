// File: virtual_functions_and_dynamic_polymorphism.cpp
// Description: This program demonstrates virtual functions and dynamic polymorphism in C++.

#include <iostream>

// Base class declaration
class Shape
{
public:
    // Virtual function for drawing a shape
    virtual void draw() const
    {
        std::cout << "Drawing a shape." << std::endl;
    }

    // Virtual function for calculating the area of a shape
    virtual void area() const
    {
        std::cout << "Calculating area of the shape." << std::endl;
    }
};

// Derived class declaration
class Circle : public Shape
{
public:
    // Override the draw() function for the Circle class
    void draw() const override
    {
        std::cout << "Drawing a circle." << std::endl;
    }

    // Override the area() function for the Circle class
    void area() const override
    {
        std::cout << "Calculating area of the circle." << std::endl;
    }

    void circumference() const
    {
        std::cout << "Calculating circumference of the circle." << std::endl;
    }
};

int main()
{
    // Create an object of the derived class Circle
    Circle circle;

    // Create a pointer to the base class Shape and assign it to the Circle object
    Shape *shapePtr = &circle;

    // Call the draw() and area() functions using the pointer to the base class
    shapePtr->draw(); // Calls the draw() function of the Circle class due to dynamic polymorphism
    shapePtr->area(); // Calls the area() function of the Circle class due to dynamic polymorphism

    // Note that the virtual functions allow us to achieve dynamic polymorphism.
    // The function calls are determined at runtime based on the actual object's type.

    return 0;
}
