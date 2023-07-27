# STL Algorithms

In the **STL Algorithms** section of the C++ 101 tutorial series, we will explore various algorithms provided by the Standard Template Library (STL) that enable efficient data manipulation and processing in C++.

## std::sort

In this part, we will delve into the `std::sort` algorithm, which allows us to sort elements in a range. It uses a variation of the quicksort algorithm and guarantees a stable sort. Understanding sorting algorithms is fundamental for efficiently organizing data.

To explore the implementation and usage of `std::sort`, refer to the [std_sort.cpp](std_sort.cpp) file.

## std::stable_sort

Next, we'll discuss `std::stable_sort`, which is another sorting algorithm that, unlike `std::sort`, maintains the relative order of equal elements. This algorithm is particularly useful when stability is essential in the sorting process.

To understand the working of `std::stable_sort`, check out the [std_stable_sort.cpp](std_stable_sort.cpp) file.

## std::partial_sort

In this part, we'll explore `std::partial_sort`, an algorithm that partially sorts a range of elements, ensuring that the k smallest elements are sorted in ascending order. The rest of the elements in the range remain unsorted.

To see practical examples and code demonstrations of `std::partial_sort`, refer to the [std_partial_sort.cpp](std_partial_sort.cpp) file.

## std::nth_element

Next, we'll discuss `std::nth_element`, an algorithm that rearranges elements in a range such that the nth element is in its sorted position. The elements before and after the nth element are not sorted.

To explore `std::nth_element` and its functionalities, check out the [std_nth_element.cpp](std_nth_element.cpp) file.

## std::make_heap

In this part, we'll delve into `std::make_heap`, an algorithm to rearrange elements in a range to form a max-heap. A max-heap is a specialized binary tree in which the parent node's value is greater than or equal to its child nodes.

To understand the operations available with `std::make_heap`, refer to the [std_make_heap.cpp](std_make_heap.cpp) file.

## std::push_heap

Next, we'll discuss `std::push_heap`, an algorithm to insert an element into a max-heap. After insertion, the range is no longer a valid max-heap.

To explore `std::push_heap` and its functionalities, check out the [std_push_heap.cpp](std_push_heap.cpp) file.

## std::pop_heap

In this part, we'll explore `std::pop_heap`, an algorithm to remove the largest element from a max-heap. After removal, the range is no longer a valid max-heap, but the removed element will be placed at the end of the range.

To understand the operations available with `std::pop_heap`, refer to the [std_pop_heap.cpp](std_pop_heap.cpp) file.

## std::is_heap

Next, we'll discuss `std::is_heap`, an algorithm that checks whether a range is a valid max-heap. It returns `true` if the range is a valid max-heap and `false` otherwise.

To explore `std::is_heap` and its functionalities, check out the [std_is_heap.cpp](std_is_heap.cpp) file.

## std::min_element

In this part, we'll delve into `std::min_element`, an algorithm that finds the smallest element in a range. This is useful for obtaining the minimum value within a collection of elements.

To understand the operations available with `std::min_element`, refer to the [std_min_element.cpp](std_min_element.cpp) file.

## std::max_element

Next, we'll discuss `std::max_element`, an algorithm that finds the largest element in a range. This is useful for obtaining the maximum value within a collection of elements.

To explore `std::max_element` and its functionalities, check out the [std_max_element.cpp](std_max_element.cpp) file.

## std::find

In this part, we'll explore `std::find`, an algorithm that searches for the first occurrence of a given value in a range. It returns an iterator pointing to the first element that matches the specified value.

To see practical examples and code demonstrations of `std::find`, refer to the [std_find.cpp](std_find.cpp) file.

## std::find_if

Next, we'll discuss `std::find_if`, an algorithm that searches for the first element in a range that satisfies a specific condition. It returns an iterator pointing to the first element that matches the condition.

To understand the working of `std::find_if`, check out the [std_find_if.cpp](std_find_if.cpp) file.

## std::find_if_not

In this part, we'll explore `std::find_if_not`, an algorithm that searches for the first element in a range that does not satisfy a given condition. It returns an iterator pointing to the first element that does not match the condition.

To see practical examples and code demonstrations of `std::find_if_not`, refer to the [std_find_if_not.cpp](std_find_if_not.cpp) file.

## std::find_end

Next, we'll discuss `std::find_end`, an algorithm that searches for the last subsequence of elements in a range that matches a specific sequence. It returns an iterator pointing to the last occurrence of the subsequence.

To explore `std::find_end` and its functionalities, check out the [std_find_end.cpp](std_find_end.cpp) file.

## std::find_first_of

In this part, we'll delve into `std::find_first_of`, an algorithm that searches for the first occurrence of any element from a given set of elements in a range. It returns an iterator pointing to the first occurrence.

To understand the operations available with `std::find_first_of`, refer to the [std_find_first_of.cpp](std_find_first_of.cpp) file.

## std::adjacent_find

Next, we'll discuss `std::adjacent_find`, an algorithm that searches for two consecutive equal elements in a range. It returns an iterator pointing to the first of the two adjacent elements.

To explore `std::adjacent_find` and its functionalities, check out the [std_adjacent_find.cpp](std_adjacent_find.cpp) file.

## std::count

In this part, we'll explore `std::count`, an algorithm that counts the number of occurrences of a specific value in a range. It returns the count of

 elements that match the value.

To see practical examples and code demonstrations of `std::count`, refer to the [std_count.cpp](std_count.cpp) file.

## std::count_if

Next, we'll discuss `std::count_if`, an algorithm that counts the number of elements in a range that satisfy a given condition. It returns the count of elements that match the condition.

To understand the working of `std::count_if`, check out the [std_count_if.cpp](std_count_if.cpp) file.

## std::binary_search

In this part, we'll delve into `std::binary_search`, an algorithm that determines whether a value exists in a sorted range. It returns `true` if the value is found and `false` otherwise.

To explore `std::binary_search` and its functionalities, check out the [std_binary_search.cpp](std_binary_search.cpp) file.

## std::lower_bound

Next, we'll discuss `std::lower_bound`, an algorithm that finds the first element not less than a given value in a sorted range. It returns an iterator pointing to the first element that is not less than the specified value.

To see practical examples and code demonstrations of `std::lower_bound`, refer to the [std_lower_bound.cpp](std_lower_bound.cpp) file.

## std::upper_bound

In this part, we'll explore `std::upper_bound`, an algorithm that finds the first element greater than a given value in a sorted range. It returns an iterator pointing to the first element that is greater than the specified value.

To understand the operations available with `std::upper_bound`, refer to the [std_upper_bound.cpp](std_upper_bound.cpp) file.

## std::equal_range

Next, we'll discuss `std::equal_range`, an algorithm that finds a range of elements in a sorted range that are equivalent to a given value. It returns a pair of iterators representing the range.

To explore `std::equal_range` and its functionalities, check out the [std_equal_range.cpp](std_equal_range.cpp) file.

## std::merge

In this part, we'll delve into `std::merge`, an algorithm that merges two sorted ranges into a single sorted range. The resulting range contains all elements from both input ranges in non-decreasing order.

To see practical examples and code demonstrations of `std::merge`, refer to the [std_merge.cpp](std_merge.cpp) file.

## std::inplace_merge

Next, we'll discuss `std::inplace_merge`, an algorithm that merges two consecutive sorted ranges within a container into a single sorted range.

To understand the working of `std::inplace_merge`, check out the [std_inplace_merge.cpp](std_inplace_merge.cpp) file.

## std::includes

In this part, we'll explore `std::includes`, an algorithm that checks if one sorted range includes another sorted range. It returns `true` if the second range is a subset of the first range.

To explore `std::includes` and its functionalities, check out the [std_includes.cpp](std_includes.cpp) file.

## std::set_union

Next, we'll discuss `std::set_union`, an algorithm that constructs a sorted range representing the union of two sorted ranges. The resulting range contains all distinct elements from both input ranges.

To see practical examples and code demonstrations of `std::set_union`, refer to the [std_set_union.cpp](std_set_union.cpp) file.

## std::set_intersection

In this part, we'll delve into `std::set_intersection`, an algorithm that constructs a sorted range representing the intersection of two sorted ranges. The resulting range contains all elements that are common in both input ranges.

To understand the operations available with `std::set_intersection`, refer to the [std_set_intersection.cpp](std_set_intersection.cpp) file.

## std::set_difference

Next, we'll discuss `std::set_difference`, an algorithm that constructs a sorted range representing the difference between two sorted ranges. The resulting range contains the elements present in the first range but not in the second range.

To explore `std::set_difference` and its functionalities, check out the [std_set_difference.cpp](std_set_difference.cpp) file.

## std::set_symmetric_difference

In this part, we'll explore `std::set_symmetric_difference`, an algorithm that constructs a sorted range representing the symmetric difference between two sorted ranges. The resulting range contains elements that are present in either of the input ranges, but not in both.

To see practical examples and code demonstrations of `std::set_symmetric_difference`, refer to the [std_set_symmetric_difference.cpp](std_set_symmetric_difference.cpp) file.

## std::transform

Next, we'll discuss `std::transform`, an algorithm that applies a specific operation to each element in a range and stores the results in another range.

To understand the working of `std::transform`, check out the [std_transform.cpp](std_transform.cpp) file.

## std::replace

In this part, we'll delve into `std::replace`, an algorithm that replaces all occurrences of a specific value in a range with another value.

To explore `std::replace` and its functionalities, check out the [std_replace.cpp](std_replace.cpp) file.

## std::replace_if

Next, we'll discuss `std::replace_if`, an algorithm that replaces elements in a range that satisfy a given condition with a specified value.



To see practical examples and code demonstrations of `std::replace_if`, refer to the [std_replace_if.cpp](std_replace_if.cpp) file.

## std::replace_copy

In this part, we'll explore `std::replace_copy`, an algorithm that creates a new range by replacing all occurrences of a specific value in a source range with another value.

To understand the operations available with `std::replace_copy`, refer to the [std_replace_copy.cpp](std_replace_copy.cpp) file.

## std::replace_copy_if

Next, we'll discuss `std::replace_copy_if`, an algorithm that creates a new range by replacing elements in a source range that satisfy a given condition with a specified value.

To explore `std::replace_copy_if` and its functionalities, check out the [std_replace_copy_if.cpp](std_replace_copy_if.cpp) file.

## std::copy

In this part, we'll delve into `std::copy`, an algorithm that copies elements from a source range to a destination range.

To see practical examples and code demonstrations of `std::copy`, refer to the [std_copy.cpp](std_copy.cpp) file.

## std::copy_if

Next, we'll discuss `std::copy_if`, an algorithm that copies elements from a source range to a destination range if they satisfy a given condition.

To understand the working of `std::copy_if`, check out the [std_copy_if.cpp](std_copy_if.cpp) file.

## std::copy_n

In this part, we'll explore `std::copy_n`, an algorithm that copies a specific number of elements from a source range to a destination range.

To explore `std::copy_n` and its functionalities, check out the [std_copy_n.cpp](std_copy_n.cpp) file.

## std::copy_backward

Next, we'll discuss `std::copy_backward`, an algorithm that copies elements from a source range to a destination range in reverse order.

To see practical examples and code demonstrations of `std::copy_backward`, refer to the [std_copy_backward.cpp](std_copy_backward.cpp) file.

## std::move

In this part, we'll delve into `std::move`, an algorithm that transfers ownership of elements from a source range to a destination range. It is useful for efficiently moving elements between containers.

To understand the operations available with `std::move`, refer to the [std_move.cpp](std_move.cpp) file.

## std::move_backward

Next, we'll discuss `std::move_backward`, an algorithm that transfers ownership of elements from a source range to a destination range in reverse order. It is useful for efficiently moving elements between containers.

To explore `std::move_backward` and its functionalities, check out the [std_move_backward.cpp](std_move_backward.cpp) file.

## std::fill

In this part, we'll explore `std::fill`, an algorithm that assigns a specific value to all elements in a range.

To see practical examples and code demonstrations of `std::fill`, refer to the [std_fill.cpp](std_fill.cpp) file.

## std::fill_n

Next, we'll discuss `std::fill_n`, an algorithm that assigns a specific value to a specific number of elements in a range.

To understand the working of `std::fill_n`, check out the [std_fill_n.cpp](std_fill_n.cpp) file.

## std::generate

In this part, we'll delve into `std::generate`, an algorithm that generates values for a range using a specified generator function.

To explore `std::generate` and its functionalities, check out the [std_generate.cpp](std_generate.cpp) file.

## std::generate_n

Next, we'll discuss `std::generate_n`, an algorithm that generates values for a specific number of elements in a range using a specified generator function.

To see practical examples and code demonstrations of `std::generate_n`, refer to the [std_generate_n.cpp](std_generate_n.cpp) file.

## std::remove

In this part, we'll explore `std::remove`, an algorithm that removes all occurrences of a specific value from a range.

To understand the operations available with `std::remove`, refer to the [std_remove.cpp](std_remove.cpp) file.

## std::remove_if

Next, we'll discuss `std::remove_if`, an algorithm that removes elements from a range that satisfy a given condition.

To explore `std::remove_if` and its functionalities, check out the [std_remove_if.cpp](std_remove_if.cpp) file.

## std::remove_copy

In this part, we'll delve into `std::remove_copy`, an algorithm that creates a new range by copying elements from a source range, excluding all occurrences of a specific value.

To see practical examples and code demonstrations of `std::remove_copy`, refer to the [std_remove_copy.cpp](std_remove_copy.cpp) file.

## std::remove_copy_if

Next, we'll discuss `std::remove_copy_if`, an algorithm that creates a new range by copying elements from a source range, excluding elements that satisfy a given condition.

To understand the working of `std::remove_copy_if`, check out the [std_remove_copy_if.cpp](std_remove_copy_if.cpp) file.

## std::unique

In this part, we'll explore `std::unique`, an algorithm that removes consecutive duplicate elements from a range, making it a range of unique elements.

To explore `std::unique` and its functionalities, check out the [std_unique.cpp](std_unique.cpp) file.

## std::unique_copy

Next, we'll discuss `std::unique_copy`, an algorithm that creates a

 new range by copying elements from a source range, excluding consecutive duplicates.

To see practical examples and code demonstrations of `std::unique_copy`, refer to the [std_unique_copy.cpp](std_unique_copy.cpp) file.

## std::reverse

In this part, we'll delve into `std::reverse`, an algorithm that reverses the order of elements in a range.

To understand the operations available with `std::reverse`, refer to the [std_reverse.cpp](std_reverse.cpp) file.

## std::reverse_copy

Next, we'll discuss `std::reverse_copy`, an algorithm that creates a new range by copying elements from a source range, but in reverse order.

To explore `std::reverse_copy` and its functionalities, check out the [std_reverse_copy.cpp](std_reverse_copy.cpp) file.

## std::rotate

In this part, we'll explore `std::rotate`, an algorithm that rotates the order of elements in a range by a specified number of positions.

To see practical examples and code demonstrations of `std::rotate`, refer to the [std_rotate.cpp](std_rotate.cpp) file.

## std::rotate_copy

Next, we'll discuss `std::rotate_copy`, an algorithm that creates a new range by copying elements from a source range, rotated by a specified number of positions.

To understand the working of `std::rotate_copy`, check out the [std_rotate_copy.cpp](std_rotate_copy.cpp) file.

## std::random_shuffle

In this part, we'll delve into `std::random_shuffle`, an algorithm that randomly shuffles the elements in a range.

To explore `std::random_shuffle` and its functionalities, check out the [std_random_shuffle.cpp](std_random_shuffle.cpp) file.

## std::shuffle

Next, we'll discuss `std::shuffle`, an algorithm that randomly shuffles the elements in a range using a specified random number generator.

To see practical examples and code demonstrations of `std::shuffle`, refer to the [std_shuffle.cpp](std_shuffle.cpp) file.

## std::sample

In this part, we'll explore `std::sample`, an algorithm that randomly selects a specified number of elements from a range.

To understand the operations available with `std::sample`, refer to the [std_sample.cpp](std_sample.cpp) file.

## std::sort_heap

Next, we'll discuss `std::sort_heap`, an algorithm that sorts a range in ascending order using the heap properties.

To explore `std::sort_heap` and its functionalities, check out the [std_sort_heap.cpp](std_sort_heap.cpp) file.

## std::is_sorted

In this part, we'll delve into `std::is_sorted`, an algorithm that checks whether a range is sorted in ascending order.

To see practical examples and code demonstrations of `std::is_sorted`, refer to the [std_is_sorted.cpp](std_is_sorted.cpp) file.

## std::is_sorted_until

Next, we'll discuss `std::is_sorted_until`, an algorithm that finds the position of the first element that violates the sorting order in a range.

To understand the working of `std::is_sorted_until`, check out the [std_is_sorted_until.cpp](std_is_sorted_until.cpp) file.

## std::nth_element

In this part, we'll explore `std::nth_element`, an algorithm that rearranges elements in a range such that the nth element is in its sorted position. The elements before and after the nth element are not sorted.

To explore `std::nth_element` and its functionalities, check out the [std_nth_element.cpp](std_nth_element.cpp) file.

## std::partition

Next, we'll discuss `std::partition`, an algorithm that partitions a range into two groups based on a given condition. Elements that satisfy the condition come before the ones that do not.

To see practical examples and code demonstrations of `std::partition`, refer to the [std_partition.cpp](std_partition.cpp) file.

## std::partition_copy

In this part, we'll delve into `std::partition_copy`, an algorithm that partitions a range into two new ranges based on a given condition. Elements that satisfy the condition are copied to one range, while the rest are copied to the other.

To understand the operations available with `std::partition_copy`, refer to the [std_partition_copy.cpp](std_partition_copy.cpp) file.

## std::stable_partition

Next, we'll discuss `std::stable_partition`, an algorithm that partitions a range into two groups based on a given condition while preserving the relative order of elements within each group.

To explore `std::stable_partition` and its functionalities, check out the [

std_stable_partition.cpp](std_stable_partition.cpp) file.

## std::search

In this part, we'll explore `std::search`, an algorithm that searches for the first occurrence of a subsequence within a range.

To see practical examples and code demonstrations of `std::search`, refer to the [std_search.cpp](std_search.cpp) file.

## std::search_n

Next, we'll discuss `std::search_n`, an algorithm that searches for a subsequence of identical elements within a range.

To understand the working of `std::search_n`, check out the [std_search_n.cpp](std_search_n.cpp) file.

## std::for_each

In this part, we'll delve into `std::for_each`, an algorithm that applies a specific function to each element in a range.

To explore `std::for_each` and its functionalities, check out the [std_for_each.cpp](std_for_each.cpp) file.

## std::for_each_n

Next, we'll discuss `std::for_each_n`, an algorithm that applies a specific function to a specific number of elements in a range.

To see practical examples and code demonstrations of `std::for_each_n`, refer to the [std_for_each_n.cpp](std_for_each_n.cpp) file.

## std::all_of

In this part, we'll explore `std::all_of`, an algorithm that checks if all elements in a range satisfy a given condition.

To understand the operations available with `std::all_of`, refer to the [std_all_of.cpp](std_all_of.cpp) file.

## std::any_of

Next, we'll discuss `std::any_of`, an algorithm that checks if any element in a range satisfies a given condition.

To explore `std::any_of` and its functionalities, check out the [std_any_of.cpp](std_any_of.cpp) file.

## std::none_of

In this part, we'll delve into `std::none_of`, an algorithm that checks if none of the elements in a range satisfy a given condition.

To see practical examples and code demonstrations of `std::none_of`, refer to the [std_none_of.cpp](std_none_of.cpp) file.

## std::accumulate

Next, we'll discuss `std::accumulate`, an algorithm that calculates the sum of all elements in a range.

To understand the working of `std::accumulate`, check out the [std_accumulate.cpp](std_accumulate.cpp) file.

## std::inner_product

In this part, we'll explore `std::inner_product`, an algorithm that calculates the inner product of two ranges.

To explore `std::inner_product` and its functionalities, check out the [std_inner_product.cpp](std_inner_product.cpp) file.

## std::adjacent_difference

Next, we'll discuss `std::adjacent_difference`, an algorithm that computes the differences between consecutive elements in a range.

To see practical examples and code demonstrations of `std::adjacent_difference`, refer to the [std_adjacent_difference.cpp](std_adjacent_difference.cpp) file.

## std::partial_sum

In this part, we'll delve into `std::partial_sum`, an algorithm that computes the partial sum of elements in a range.

To understand the operations available with `std::partial_sum`, refer to the [std_partial_sum.cpp](std_partial_sum.cpp) file.

## std::reduce

Next, we'll discuss `std::reduce`, an algorithm that reduces the elements in a range using a binary operation.

To explore `std::reduce` and its functionalities, check out the [std_reduce.cpp](std_reduce.cpp) file.

## std::transform_reduce

In this part, we'll explore `std::transform_reduce`, an algorithm that applies a specific transformation to elements in a range before reducing them using a binary operation.

To see practical examples and code demonstrations of `std::transform_reduce`, refer to the [std_transform_reduce.cpp](std_transform_reduce.cpp) file.

## std::inclusive_scan

Next, we'll discuss `std::inclusive_scan`, an algorithm that computes the inclusive prefix sum of elements in a range.

To understand the working of `std::inclusive_scan`, check out the [std_inclusive_scan.cpp](std_inclusive_scan.cpp) file.

## std::exclusive_scan

In this part, we'll delve into `std::exclusive_scan`, an algorithm that computes the exclusive prefix sum of elements in a range.

To explore `std::exclusive_scan` and its functionalities, check out the [std_exclusive_scan.cpp](std_exclusive_scan.cpp) file.

## std::transform_exclusive_scan

Next, we'll discuss `std::transform_exclusive_scan`, an algorithm that applies a specific transformation to elements in a range before computing the exclusive prefix sum.

To see practical examples and code demonstrations of `std::transform_exclusive_scan`, refer to the [std_transform_exclusive_scan.cpp](std_transform_exclusive_scan.cpp) file.

## std::transform_inclusive_scan

In this part, we'll explore `std::transform_inclusive_scan`, an algorithm that applies a specific transformation to elements in a range before computing the inclusive prefix sum.

To understand the operations available with `std::transform_inclusive_scan`, refer to the [std_transform_inclusive_scan.cpp](src/11__stl_algorithms

/std_transform_inclusive_scan.cpp) file.

## std::equal

Next, we'll discuss `std::equal`, an algorithm that checks if two ranges are equal.

To explore `std::equal` and its functionalities, check out the [std_equal.cpp](std_equal.cpp) file.

## std::lexicographical_compare

In this part, we'll delve into `std::lexicographical_compare`, an algorithm that compares two ranges lexicographically.

To see practical examples and code demonstrations of `std::lexicographical_compare`, refer to the [std_lexicographical_compare.cpp](std_lexicographical_compare.cpp) file.

## std::mismatch

Lastly, we'll explore `std::mismatch`, an algorithm that finds the first position where two ranges differ.

To understand the working of `std::mismatch`, check out the [std_mismatch.cpp](std_mismatch.cpp) file.

This completes our discussion on the Standard Template Library (STL) algorithms. By mastering these powerful algorithms, you will significantly enhance your ability to manipulate data and solve complex problems efficiently in C++. Happy coding!