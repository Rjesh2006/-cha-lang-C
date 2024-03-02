# _There are two main types of polymorphism in C++:_

**Compile-time Polymorphism
  Run-time Polymorphism
  Let's discuss each type:**

- ## ***1. Compile-time Polymorphism***

  **Compile-time polymorphism, also known as static polymorphism, occurs when the decision about which function to call is made at compile time. This type of 
    polymorphism is achieved through function overloading and operator overloading.**
  
  **Function Overloading: It allows multiple functions in the same scope with the same name but different parameters. The appropriate function to call is 
    determined by the number and types of arguments passed to it.**
  
  **Operator Overloading: It allows operators to be redefined for user-defined types. This enables operators to be used with user-defined types in a natural way, 
    similar to built-in types.**

```cpp
#include <iostream>

// Function overloading
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// Operator overloading
class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r, double i) : real(r), imaginary(i) {}

    // Overloading + operator
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    void display() const {
        std::cout << real << " + " << imaginary << "i\n";
    }
};

int main() {
    // Function overloading
    std::cout << "Sum of integers: " << add(5, 3) << std::endl;
    std::cout << "Sum of doubles: " << add(5.5, 3.3) << std::endl;

    // Operator overloading
    Complex c1(2.5, 3.0);
    Complex c2(1.5, 2.0);
    Complex sum = c1 + c2;
    std::cout << "Sum of complex numbers: ";
    sum.display();

    return 0;
}
```


- ## ***2. Run-time Polymorphism***
  **Run-time polymorphism, also known as dynamic polymorphism, occurs when the decision about which function to call is made at run time. This type of                 polymorphism is achieved through virtual functions and inheritance.**
  
  **Virtual Functions: When a function is declared as virtual in a base class, it can be overridden by a function with the same signature in any derived class.        The appropriate function to call is determined at runtime based on the type of object being referred to.**


```cpp
#include <iostream>

// Base class
class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape\n";
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle\n";
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a rectangle\n";
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;

    Shape* shape1 = &circle;
    Shape* shape2 = &rectangle;

    shape1->draw(); // Output: Drawing a circle
    shape2->draw(); // Output: Drawing a rectangle

    return 0;
}
```
