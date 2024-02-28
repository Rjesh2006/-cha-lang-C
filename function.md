# Basic Function:

**Program:**

```cpp
#include <iostream>
// Function declaration
void greet() {
    std::cout << "Hello, World!" << std::endl;
}

int main() {
    // Function call
    greet();
    return 0;
}
```

***Theory:This program defines a basic function greet() that prints "Hello, World!" to the standard output. In main(), greet() is called, which triggers the execution of greet().
Function with Parameters:***



Program:

```cpp
Copy code
#include <iostream>

// Function declaration with parameters
void greet(const std::string& name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}

int main() {
    std::string userName = "Alice";
    // Function call with argument
    greet(userName);
    return 0;
}
```
***Theory: This program defines a function greet() that takes a std::string parameter name. In main(), a std::string variable userName is initialized and passed as an argument to greet(). greet() then prints "Hello, " followed by the provided name.
Function with Return Value:***

Program:
```cpp
Copy code
#include <iostream>

// Function declaration with return value
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
```


***Theory: This program defines a function add() that takes two integer parameters and returns their sum. In main(), add() is called with arguments 5 and 3, and the returned value is stored in result, which is then printed to the standard output.
Function Overloading:***



**Program:**

```cpp
Copy code
#include <iostream>

// Function overloading
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    int intResult = add(5, 3);
    float floatResult = add(2.5f, 3.7f);
    std::cout << "Integer Result: " << intResult << std::endl;
    std::cout << "Float Result: " << floatResult << std::endl;
    return 0;
}
```

***Theory: This program demonstrates function overloading, where two functions with the same name (add()) are defined but with different parameter types. In main(), add() is called with different argument types, and the appropriate overloaded function is invoked based on the argument types.
Function with Default Arguments:***




Program:

```cpp
Copy code
#include <iostream>

// Function with default arguments
void printInfo(int age, std::string name = "Unknown", std::string country = "Unknown") {
    std::cout << "Name: " << name << ", Age: " << age << ", Country: " << country << std::endl;
}

int main() {
    printInfo(25, "Alice");
    printInfo(30, "Bob", "USA");
    return 0;
}
```



***Theory:This program defines a function printInfo() that prints information about a person, including their name, age, and country. The name and country parameters have default values of "Unknown". In main(), printInfo() is called with different combinations of arguments, demonstrating the use of default arguments.
Function Template:***

**Program:**

```cpp
Copy code
#include <iostream>

// Function template
template<typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int intResult = add(5, 3);
    float floatResult = add(2.5f, 3.7f);
    std::cout << "Integer Result: " << intResult << std::endl;
    std::cout << "Float Result: " << floatResult << std::endl;
    return 0;
}
```



***Theory: This program demonstrates function templates, which allow defining a generic function that can operate on different data types. The add() function template takes two parameters of the same type (T) and returns their sum. In main(), add() is called with different argument types (int and float), and the appropriate instantiation of the function template is created for each call.***




