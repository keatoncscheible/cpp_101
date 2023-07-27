# C++11 Features

In the **C++11 Features** section of the C++ 101 tutorial series, we will explore some of the exciting additions and improvements introduced in the C++11 standard. C++11 brought numerous features that enhance the language, making it more powerful, expressive, and convenient to use.

## Lambda Expressions

Lambda expressions are a powerful feature introduced in C++11, providing a concise way to define anonymous functions. These functions can be created inline, right at the location where they are needed, without the need to declare them separately. Lambdas are particularly useful when passing simple functions as arguments to higher-order functions like `std::for_each`, `std::sort`, or custom algorithms.

To see practical examples and code demonstrations of lambda expressions, refer to the [lambda_expressions.cpp](lambda_expressions.cpp) file.

## Range-based For Loops

The range-based for loop is another helpful addition from C++11, simplifying the process of iterating over elements in a container, such as arrays, vectors, or other standard containers. This loop automatically iterates through the entire range of elements, making it less error-prone and more readable compared to traditional index-based loops.

To understand how to use range-based for loops effectively, check out the [range_based_for_loops.cpp](range_based_for_loops.cpp) file.

## Smart Pointers (std::unique_ptr, std::shared_ptr)

C++11 introduced smart pointers, which are an essential tool for managing dynamic memory allocation and avoiding memory leaks. Smart pointers automatically manage the memory of dynamically allocated objects, ensuring proper deallocation when the object is no longer needed. They come in different flavors, such as `std::unique_ptr`, which provides exclusive ownership, and `std::shared_ptr`, which enables shared ownership among multiple pointers.

To explore how smart pointers work and their advantages over raw pointers, refer to the [smart_pointers.cpp](smart_pointers.cpp) file.

By learning about the C++11 features, you will be able to leverage the modern capabilities of the language and write more concise and efficient code. Let's dive into the world of C++11 and embrace the enhancements it brings to C++!

---
This section is part of the C++ 101 tutorial series. To explore other topics, check the Table of Contents in the main README.md file.