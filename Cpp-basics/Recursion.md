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
```


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
```

# Types of Recursion

This repository contains C++ examples demonstrating different types of recursion.

## 1. Direct Recursion

- **Definition**: Direct recursion occurs when a function directly calls itself.
- **Explanation**: The function directly invokes itself within its body.
- **Example**: The function `directRecursion` in the provided code calls itself directly.

```cpp
#include <iostream>

void directRecursion(int n) {
    if (n > 0) {
        std::cout << n << " ";
        directRecursion(n - 1); // Function calling itself
    }
}

int main() {
    int num = 5;
    std::cout << "Direct Recursion: ";
    directRecursion(num);
    return 0;
}
```


## 2. Indirect Recursion

- **Definition**: Indirect recursion happens when two or more functions call each other in a cycle.
- **Explanation**: Functions call each other either directly or through other functions, creating a loop of function calls.
- **Example**: Functions `func1` and `func2` in the provided code call each other alternatively.
  
```cpp
#include <iostream>

void func1(int n);

void func2(int n) {
    if (n > 0) {
        std::cout << n << " ";
        func1(n - 1); // Function calling another function
    }
}

void func1(int n) {
    if (n > 1) {
        std::cout << n << " ";
        func2(n / 2); // Function calling another function
    }
}

int main() {
    int num = 10;
    std::cout << "Indirect Recursion: ";
    func1(num);
    return 0;
}
```

## 3. Tail Recursion

- **Definition**: Tail recursion occurs when the recursive call is the last operation performed by the function before returning.
- **Explanation**: The recursive call appears at the end of the function body, like a tail.
- **Example**: The `tailRecursion` function in the provided code demonstrates tail recursion.
- 
```cpp
#include <iostream>

void tailRecursion(int n) {
    if (n > 0) {
        std::cout << n << " ";
        tailRecursion(n - 1); // Tail recursion
    }
}

int main() {
    int num = 5;
    std::cout << "Tail Recursion: ";
    tailRecursion(num);
    return 0;
}
```

## 4. Non-tail Recursion

- **Definition**: Non-tail recursion happens when there are additional operations performed after the recursive call before the function returns.
- **Explanation**: The recursive call isn't the last operation; there are further computations or actions after it.
- **Example**: The `nonTailRecursion` function in the provided code prints the value of `n` after the recursive call.
  
```cpp
#include <iostream>

void nonTailRecursion(int n) {
    if (n > 0) {
        nonTailRecursion(n - 1); // Non-tail recursion
        std::cout << n << " ";
    }
}

int main() {
    int num = 5;
    std::cout << "Non-tail Recursion: ";
    nonTailRecursion(num);
    return 0;
}
```


## 5. Mutual Recursion

- **Definition**: Mutual recursion involves two or more functions calling each other directly or indirectly.
- **Explanation**: Functions depend on each other in a cyclic manner to perform a task.
- **Example**: Functions `even` and `odd` in the provided code call each other alternatively, forming a mutual recursion.

  
```cpp
#include <iostream>

void even(int n);

void odd(int n) {
    if (n > 0) {
        std::cout << n << " ";
        even(n - 1); // Function calling another function
    }
}

void even(int n) {
    if (n > 0) {
        std::cout << n << " ";
        odd(n - 1); // Function calling another function
    }
}

int main() {
    int num = 10;
    std::cout << "Mutual Recursion: ";
    odd(num);
    return 0;
}
```

