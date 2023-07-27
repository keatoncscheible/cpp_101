// File: base_and_derived_classes.cpp
// Description: This program demonstrates the concept of inheritance in C++.

#include <iostream>

// Base class declaration
class Shape
{
public:
    void draw() const
    {
        std::cout << "Drawing a shape." << std::endl;
    }

    void area() const
    {
        std::cout << "Calculating area of the shape." << std::endl;
    }
};

// Derived class declaration
class Circle : public Shape
{
public:
    void draw() const
    {
        std::cout << "Drawing a circle." << std::endl;
    }

    void area() const
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

    // Call functions from the base and derived classes
    circle.draw();          // Calls the draw() function from the Circle class
    circle.area();          // Calls the area() function from the Circle class
    circle.circumference(); // Calls the circumference() function from the Circle class

    // Call the area() function from the base class using the derived class object
    circle.Shape::area(); // Calls the area() function from the Shape base class

    return 0;
}
