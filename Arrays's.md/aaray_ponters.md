```cpp
#include <iostream>

int main() {
    // Declare an array of integers
    int arr[5] = {1, 2, 3, 4, 5};

    // Declare a pointer to an integer
    int *ptr;

    // Assign the address of the first element of the array to the pointer
    ptr = arr;

    // Print the elements of the array using pointer arithmetic
    std::cout << "Array elements using pointers:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
```
**Explanation:**

We declare an array of integers arr with 5 elements.
We declare a pointer to an integer ptr.
We assign the address of the first element of the array arr to the pointer ptr. This is done automatically because the name of an array evaluates to the address of its first element.
We print the elements of the array using pointer arithmetic. In each iteration of the loop, we use pointer arithmetic to access the elements of the array using the pointer ptr.
We dereference the pointer ptr using the * operator to access the value stored at the memory location pointed to by the pointer.
