// File: smart_pointers.cpp
// Description: An illustrative example of using smart pointers in C++11 and later.
// This example demonstrates the use of std::unique_ptr and std::shared_ptr to manage
// dynamically allocated memory and prevent memory leaks.

#include <iostream>
#include <memory>

class MyClass
{
public:
    MyClass(int val) : value(val)
    {
        std::cout << "Constructor called. Value: " << value << std::endl;
    }

    ~MyClass()
    {
        std::cout << "Destructor called. Value: " << value << std::endl;
    }

    void display()
    {
        std::cout << "Value: " << value << std::endl;
    }

private:
    int value;
};

int main()
{
    // Using std::unique_ptr
    {
        std::cout << "Using std::unique_ptr:" << std::endl;
        std::unique_ptr<MyClass> uniquePtr = std::make_unique<MyClass>(10);
        uniquePtr->display();
    } // The unique_ptr is automatically deleted when it goes out of scope

    // Using std::shared_ptr
    {
        std::cout << "\nUsing std::shared_ptr:" << std::endl;
        std::shared_ptr<MyClass> sharedPtr1 = std::make_shared<MyClass>(20);
        std::shared_ptr<MyClass> sharedPtr2 = sharedPtr1; // Shared ownership

        sharedPtr1->display();
        sharedPtr2->display();
    } // The shared_ptr is automatically deleted when the last reference goes out of scope

    return 0;
}
