# _""Object-Oriented Programming (OOP) Concepts in C++""_

**In C++, "oops" typically refers to Object-Oriented Programming (OOP) principles, not to be confused with the exclamation used to express a mistake. Object-Oriented Programming is a programming paradigm that revolves around the concept of objects, which encapsulate data and behavior. In OOP, you define classes, which are blueprints for creating objects, and objects are instances of these classes.**


# **Definition of a Class
**A class in C++ is defined using the class keyword followed by the class name and a block of member variables and functions. It typically consists of data members (also called attributes or properties) and member functions (also called methods).**

```cpp
// Class definition
class MyClass {
public:
    // Data members
    int myInteger;
    double myDouble;

    // Member functions
    void myFunction() {
        // Function body
    }
}
```





## **Access Specifiers**

**C++ provides three access specifiers: public, private, and protected. They determine the access level of the members of the class.**

**public: Members declared as public are accessible from outside the class.
private: Members declared as private are only accessible from within the class.
protected: Members declared as protected are accessible from within the class and its derived classes.
Creating Objects
Once a class is defined, you can create objects (instances) of that class using the class name followed by parentheses ().**

```cpp
MyClass obj1; // Creating an object of MyClass
MyClass obj2; // Creating another object of MyClass
```

Accessing Members
You can access the members (data members and member functions) of an object using the dot . operator.

```cpp
obj1.myInteger = 10; // Accessing and setting the value of myInteger
obj1.myFunction();   // Calling the member function myFunction
```

## Example: Simple Class
**Here's a simple example demonstrating the use of classes in C++:**

```cpp
#include <iostream>

// Class definition
class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }

    // Member function to calculate area
    double area() {
        return length * width;
    }

    // Member function to display information
    void display() {
        std::cout << "Length: " << length << ", Width: " << width << ", Area: " << area() << std::endl;
    }
}

int main() {
    // Create objects of Rectangle class
    Rectangle rect1(5.0, 3.0);
    Rectangle rect2(7.0, 4.0);

    // Display information about rectangles
    std::cout << "Rectangle 1:" << std::endl;
    rect1.display();

    std::cout << "Rectangle 2:" << std::endl;
    rect2.display();

    return 0;
}
```
**output:_**
```cpp
Rectangle 1:
Length: 5, Width: 3, Area: 15
Rectangle 2:
Length: 7, Width: 4, Area: 28
```
