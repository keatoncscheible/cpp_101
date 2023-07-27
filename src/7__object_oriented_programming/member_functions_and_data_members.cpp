// File: member_functions_and_data_members.cpp
// Description: This program demonstrates the use of member functions and data members in a C++ class.

#include <iostream>
#include <string>

// Class declaration
class Car
{
public:
    // Data members
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

    // Member function to calculate the age of the car
    int calculateAge(int currentYear)
    {
        return currentYear - year;
    }
};

int main()
{
    // Creating an object of the Car class
    Car myCar;

    // Setting values for the data members
    myCar.brand = "Toyota";
    myCar.model = "Camry";
    myCar.year = 2020;

    // Displaying information about the car using the member function
    std::cout << "Car Information:" << std::endl;
    myCar.displayInfo();

    // Calculating and displaying the age of the car using another member function
    int currentYear = 2023;
    int age = myCar.calculateAge(currentYear);
    std::cout << "Age of the Car: " << age << " years" << std::endl;

    return 0;
}
