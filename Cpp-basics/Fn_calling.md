1.**Standard Function Calling
In standard function calling, you call a function by writing its name followed by parentheses (). If the function requires arguments, you provide them within the parentheses.**

```cpp
#include <iostream>

// Function declaration
void greet() {
    std::cout << "Hello, world!" << std::endl;
}

int main() {
    // Function calling
    greet(); // Standard function calling
    return 0;
}
```

**Key Points about Standard Function Calling:
No special keywords or symbols are needed for standard function calling.
You simply write the function name followed by parentheses, optionally containing arguments.
This is the most common way of invoking functions in C++.**



# 2. Call by Value
**In call by value, function arguments are passed by copying their values. Any modifications made to the parameters inside the function do not affect the original arguments.**

```cpp
#include <iostream>

// Function to increment a number
void increment(int x) {
    x++; // Increment the local copy of x
    std::cout << "Inside function: " << x << std::endl;
}

int main() {
    int num = 5;
    increment(num); // Call by value
    std::cout << "Outside function: " << num << std::endl;
    return 0;
}
```

**Key Points about Call by Value:
A copy of the argument is made and passed to the function.
Modifications made to the parameters inside the function do not affect the original arguments.
Suitable for situations where the function should not modify the original data.**


# 3. Call by Reference
**In call by reference, function arguments are passed by referring to the original variables. Any changes made to the parameters inside the function affect the original arguments.**

```cpp
#include <iostream>

// Function to increment a number
void increment(int &x) {
    x++; // Increment the original x
    std::cout << "Inside function: " << x << std::endl;
}

int main() {
    int num = 5;
    increment(num); // Call by reference
    std::cout << "Outside function: " << num << std::endl;
    return 0;
}
```

**Key Points about Call by Reference:
The function receives a reference to the original variable.
Modifications made to the parameters inside the function directly affect the original arguments.
Suitable for situations where the function needs to modify the original data efficiently.**



