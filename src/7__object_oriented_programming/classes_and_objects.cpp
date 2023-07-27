// File: classes_and_objects.cpp
// Description: This program demonstrates the concept of classes and objects in C++.

#include <iostream>
#include <string>

// Class declaration
class Car
{
public:
    // Member variables
    std::string brand;
    std::string model;
    int year;

    // Member function to display car information
    void displayInfo()
    {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
};

int main()
{
    // Creating objects of the Car class
    Car car1;
    Car car2;

    // Setting values for car1
    car1.brand = "Toyota";
    car1.model = "Camry";
    car1.year = 2022;

    // Setting values for car2
    car2.brand = "Honda";
    car2.model = "Civic";
    car2.year = 2021;

    // Displaying information about the cars
    std::cout << "Car 1 Information:" << std::endl;
    car1.displayInfo();

    std::cout << "\nCar 2 Information:" << std::endl;
    car2.displayInfo();

    return 0;
}
