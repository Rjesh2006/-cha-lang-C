# Recursion in C++

Recursion in C++ is a powerful problem-solving technique where a function calls itself repeatedly until a specific condition is met. Let’s break down the key aspects of recursion:

## Recursive Function

- A function that calls itself is called a recursive function.
- When a recursive function is invoked, it executes a set of instructions and then calls itself with a smaller input.
- This process continues until a base case is reached, which is a condition that stops the recursion and returns a value.

## Base Condition

- The base condition is used to terminate the recursion.
- The recursive function keeps calling itself until the base condition is satisfied.
- For example, consider the following recursive function:

'''cpp
#include <iostream>

int nSum(int n) {
    if (n == 0) {
        return 0;
    }
    int res = n + nSum(n - 1);
    return res;
}

int main() {
    int n = 5; // Example value of n
    std::cout << "Sum of integers from 1 to " << n << ": " << nSum(n) << std::endl;
    return 0;
}
'''


## Recursive Case
- The recursive case defines how the recursive call is present in the function.
- It can contain multiple recursive calls or different parameters.
- The goal is to satisfy the base condition eventually.
- In the example above, the recursive case is `int res = n + nSum(n - 1);`.

  

## Working of Recursion in C++
**Let’s trace the flow of the program for n = 5:**

 ```cpp
nSum(5):
Recursive case: int res = 5 + nSum(4); 
nSum(4):
Recursive case: int res = 4 + nSum(3); 
nSum(3):
Recursive case: int res = 3 + nSum(2); 
nSum(2):
Recursive case: int res = 2 + nSum(1); 
nSum(1):
Recursive case: int res = 1 + nSum(0); 
nSum(0):
Base condition: return 0;
```cpp


