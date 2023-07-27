// File: constructors_and_destructors.cpp
// Description: This program demonstrates the use of constructors and destructors in C++.

#include <iostream>
#include <string>

// Class declaration
class Student
{
public:
    // Constructor with parameters
    Student(std::string name, int age)
    {
        this->name = name;
        this->age = age;
        std::cout << "Constructor called for " << name << std::endl;
    }

    // Destructor
    ~Student()
    {
        std::cout << "Destructor called for " << name << std::endl;
    }

    // Member function to display student information
    void displayInfo()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

private:
    std::string name;
    int age;
};

int main()
{
    // Creating objects of the Student class using constructors
    Student student1("Alice", 20);
    Student student2("Bob", 22);

    // Displaying information about the students
    std::cout << "Student 1 Information:" << std::endl;
    student1.displayInfo();

    std::cout << "\nStudent 2 Information:" << std::endl;
    student2.displayInfo();

    // Destructors are automatically called when objects go out of scope

    return 0;
}
