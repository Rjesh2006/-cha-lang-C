1. Single Inheritance
Explanation:

In single inheritance, a class inherits from only one base class. This means that the derived class inherits all the members of the base class.

Example:

In the provided example, the Dog class inherits from the Animal class. As a result, the Dog class inherits the eat() method from the Animal class.

```cpp
#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating\n";
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking\n";
    }
};

int main() {
    Dog dog;
    dog.eat();  // Accessing base class method
    dog.bark(); // Accessing derived class method
    return 0;
}
```


2. Multiple Inheritance
Explanation:

Multiple inheritance occurs when a class inherits from more than one base class. This allows the derived class to inherit properties and behaviors from multiple classes.

Example:

In the provided example, the DogBird class inherits from both the Dog and Bird classes. As a result, the DogBird class can access methods from both the Dog and Bird classes.

```cpp
#include <iostream>

// Base class 1
class Dog {
public:
    void bark() {
        std::cout << "Dog is barking\n";
    }
};

// Base class 2
class Bird {
public:
    void chirp() {
        std::cout << "Bird is chirping\n";
    }
};

// Derived class inheriting from both Dog and Bird
class DogBird : public Dog, public Bird {
public:
    void fly() {
        std::cout << "DogBird is flying\n";
    }
};

int main() {
    DogBird dogBird;
    dogBird.bark();  // Accessing method from Dog class
    dogBird.chirp(); // Accessing method from Bird class
    dogBird.fly();   // Accessing method from DogBird class
    return 0;
}
```

3. Multilevel Inheritance
Explanation:

Multilevel inheritance occurs when a derived class inherits from another derived class. This creates a hierarchy of classes where each class inherits properties and behaviors from its parent class.

Example:

In the provided example, the Labrador class inherits from the Dog class, which in turn inherits from the Animal class. As a result, the Labrador class can access methods from both the Dog and Animal classes.

3. Multilevel Inheritance
Explanation:

Multilevel inheritance occurs when a derived class inherits from another derived class. This creates a hierarchy of classes where each class inherits properties and behaviors from its parent class.

Example:

In the provided example, the Labrador class inherits from the Dog class, which in turn inherits from the Animal class. As a result, the Labrador class can access methods from both the Dog and Animal classes.

```cpp
#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating\n";
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking\n";
    }
};

// Further derived class
class Labrador : public Dog {
public:
    void color() {
        std::cout << "Labrador is brown in color\n";
    }
};

int main() {
    Labrador lab;
    lab.eat();   // Accessing method from Animal class
    lab.bark();  // Accessing method from Dog class
    lab.color(); // Accessing method from Labrador class
    return 0;
}
```


4. Hierarchical Inheritance
Explanation:

Hierarchical inheritance occurs when multiple derived classes inherit from a single base class. This creates a hierarchy of classes where each derived class shares properties and behaviors from a common base class.

Example:

In the provided example, both the Dog and Cat classes inherit from the Animal class. As a result, both Dog and Cat classes can access methods from the Animal class.
```cpp
#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating\n";
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking\n";
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        std::cout << "Cat is meowing\n";
    }
};

int main() {
    Dog dog;
    dog.eat(); // Accessing method from Animal class
    dog.bark(); // Accessing method from Dog class

    Cat cat;
    cat.eat(); // Accessing method from Animal class
    cat.meow(); // Accessing method from Cat class
    return 0;
}
```





