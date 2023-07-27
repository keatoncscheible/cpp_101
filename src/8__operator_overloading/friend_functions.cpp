// File: friend_functions.cpp
// Description: This program demonstrates the concept of friend functions in C++.

#include <iostream>

// Forward declaration of the class
class MyClass;

// Friend function declaration
void showValue(const MyClass &obj);

// Class declaration
class MyClass
{
private:
    int value;

public:
    MyClass(int val) : value(val) {}

    // Declare the friend function
    friend void showValue(const MyClass &obj);
};

// Friend function definition
void showValue(const MyClass &obj)
{
    // Since the friend function has access to the private members of MyClass,
    // it can access the 'value' member directly.
    std::cout << "Value of MyClass: " << obj.value << std::endl;
}

int main()
{
    // Create an object of MyClass
    MyClass obj(42);

    // Call the friend function to display the value
    showValue(obj);

    return 0;
}
