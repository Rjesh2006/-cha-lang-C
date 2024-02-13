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

```cpp
int nSum(int n) {
    if (n == 0) {
        return 0;
    }
    int res = n + nSum(n - 1);
    return res;
}





