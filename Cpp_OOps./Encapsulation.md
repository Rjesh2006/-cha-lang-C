# **Definition:**

**Encapsulation is a fundamental concept in object-oriented programming (OOP).
It involves bundling data (attributes) and methods (functions) that operate on the data into a single unit or class.
Purpose:**

**Encapsulation helps in hiding the internal state of an object from the outside world.
It allows for the exposure of only necessary parts of an object's behavior while hiding the implementation details.
Encapsulation facilitates data hiding, abstraction, and modularity in code, enhancing code reusability and maintainability.
Implementation:**

**In C++, encapsulation is achieved using classes.
Data members are declared as private within the class, making them accessible only from within the class.
Member functions can be declared as public, private, or protected to control access to the data members.
Access Specifiers:**

**private: Data members and member functions declared as private are accessible only within the class itself and not from outside the class.
public: Data members and member functions declared as public are accessible from outside the class.
protected: Data members and member functions declared as protected are accessible within the class itself and also by derived classes.
Getter and Setter Methods:**

**Getter methods (also known as accessor methods) are public member functions used to retrieve the values of private data members.
Setter methods (also known as mutator methods) are public member functions used to modify the values of private data members.
Getter and setter methods allow controlled access to private data members, enforcing encapsulation principles.
Benefits:**

**Enhances security by preventing direct access to sensitive data.
Simplifies maintenance and modification of code by isolating implementation details.
Promotes code reusability through the use of well-defined interfaces.
Facilitates effective testing and debugging by localizing changes to specific parts of the code.
Supports the principle of information hiding, where the internal details of an object are hidden from the user, promoting a clear separation of concerns.
Example:**

**Demonstrated using a Person class containing private data members name and age.
Public member functions (getName(), getAge(), setName(), setAge()) provide controlled access to the private data members.
Encapsulation ensures that the internal state of a Person object is accessed and modified only through the defined interface, maintaining data integrity and code reliability.
Encapsulation plays a crucial role in achieving the principles of OOP, including abstraction, inheritance, and polymorphism, by providing a mechanism for data protection and controlled access.**


```cpp
#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(std::string n, int a) : name(n), age(a) {}

    // Getter methods
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    // Setter methods
    void setName(const std::string& n) {
        name = n;
    }

    void setAge(int a) {
        if (a >= 0) // Ensure age is non-negative
            age = a;
    }
};

int main() {
    Person person("John", 30);
    
    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;
    
    person.setName("Alice");
    person.setAge(25);
    
    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;

    return 0;
}
```

