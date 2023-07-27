# STL Containers

The **STL Containers** section of the C++ 101 tutorial series focuses on the Standard Template Library (STL) containers, which provide ready-to-use data structures that simplify the management and manipulation of data in C++.

## std::vector

In this part, we'll explore the versatile `std::vector` container, which is a dynamic array that can resize itself as elements are added or removed. It allows constant-time random access to elements and provides various member functions to handle elements efficiently.

To learn more about `std::vector` and its functionalities, refer to the [std_vector.cpp](std_vector.cpp) file.

## std::list

Next, we'll dive into `std::list`, a doubly-linked list container that allows fast insertions and deletions at any position in the list. Unlike `std::vector`, `std::list` does not provide direct random access to elements but is useful when frequent insertions or removals are required.

To understand the working of `std::list`, check out the [std_list.cpp](std_list.cpp) file.

## std::deque

In this part, we'll discuss `std::deque`, which stands for "double-ended queue." It is a sequence container that allows constant-time random access to elements, similar to `std::vector`. Additionally, it provides constant-time insertion and deletion at the beginning and end of the container, making it an efficient alternative for certain use cases.

To explore the features of `std::deque`, refer to the [std_deque.cpp](std_deque.cpp) file.

## std::forward_list

Next, we'll examine `std::forward_list`, which is a singly-linked list container. It is similar to `std::list`, but it consumes less memory due to its single-link structure. However, it does not support backward traversal like `std::list`.

To see the operations possible with `std::forward_list`, check out the [std_forward_list.cpp](std_forward_list.cpp) file.

## std::array

In this part, we'll discuss `std::array`, a container that represents a fixed-size array. It provides several member functions to access and manipulate elements and is more efficient than built-in arrays in C++.

To explore `std::array` and its functionalities, refer to the [std_array.cpp](std_array.cpp) file.

## std::set

Next, we'll explore the `std::set` container, which is an ordered associative container that stores unique elements. The elements in a set are always sorted in ascending order, making it efficient for searching, insertion, and deletion.

To understand the operations available with `std::set`, check out the [std_set.cpp](std_set.cpp) file.

## std::multiset

In this part, we'll discuss `std::multiset`, which is similar to `std::set`, but it allows duplicate elements. All the elements are kept sorted in ascending order, and the container allows efficient search and insertion of elements.

To explore `std::multiset` and its functionalities, refer to the [std_multiset.cpp](std_multiset.cpp) file.

## std::map

Next, we'll delve into `std::map`, an ordered associative container that stores key-value pairs. The elements are sorted based on the keys, allowing efficient search, insertion, and deletion operations based on the keys.

To see the operations available with `std::map`, check out the [std_map.cpp](std_map.cpp) file.

## std::multimap

In this part, we'll discuss `std::multimap`, which is similar to `std::map`, but it allows duplicate keys. All the elements are kept sorted based on the keys, and the container allows efficient search and insertion based on the keys.

To explore `std::multimap` and its functionalities, refer to the [std_multimap.cpp](std_multimap.cpp) file.

## std::unordered_set

Next, we'll explore the `std::unordered_set` container, which is an unordered associative container that stores unique elements. It uses a hash table to provide constant-time average search, insertion, and deletion operations.

To understand the operations available with `std::unordered_set`, check out the [std_unordered_set.cpp](std_unordered_set.cpp) file.

## std::unordered_multiset

In this part, we'll discuss `std::unordered_multiset`, which is similar to `std::unordered_set`, but it allows duplicate elements. It provides constant-time average search, insertion, and deletion operations based on the hash values.

To explore `std::unordered_multiset` and its functionalities, refer to the [std_unordered_multiset.cpp](std_unordered_multiset.cpp) file.

## std::unordered_map

Next, we'll delve into `std::unordered_map`, an unordered associative container that stores key-value pairs. It uses a hash table to provide constant-time average search, insertion, and deletion operations based on the keys.

To see the operations available with `std::unordered_map`, check out the [std_unordered_map.cpp](std_unordered_map.cpp) file.

## std::unordered_multimap

In this part, we'll discuss `std::unordered_multimap`, which is similar to `std::unordered_map`, but it allows duplicate keys. It provides constant-time average search, insertion, and deletion operations based on the keys' hash values.

To explore `std::unordered_multimap` and its functionalities, refer to the [std_unordered_multimap.cpp](std_unordered_multimap.cpp) file.

By understanding these powerful STL containers, you can significantly improve the efficiency and organization of your C++ programs by leveraging the capabilities of these data structures.

---
This section is part of the C++ 101 tutorial series. To explore other topics, check the Table of Contents in the main README.md file.