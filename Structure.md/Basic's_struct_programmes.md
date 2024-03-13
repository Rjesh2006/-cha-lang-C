## 1. Declaration of Struct:
```cpp
#include <iostream>
#include <string>
using namespace std;

// Define a struct named Person with three members: name, age, and height
struct Person {
    string name;
    int age;
    double height;
};

int main() {
    // Declare and initialize two instances of the Person struct
    Person person1;
    person1.name = "John";
    person1.age = 30;
    person1.height = 6.2;

    Person person2 = {"Alice", 25, 5.5};

    // Output the details of the two persons
    cout << "Person 1:" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << endl;

    cout << "\nPerson 2:" << endl;
    cout << "Name: " << person2.name << endl;
    cout << "Age: " << person2.age << endl;
    cout << "Height: " << person2.height << endl;

    return 0;
}
```

**Explanation:**

This code defines a Person struct with three members: name, age, and height.
Two instances of the Person struct are created, person1 and person2, and initialized with values.
The details of both persons are then printed to the console.
Use case: This demonstrates how to define and use a simple struct to represent entities with multiple attributes, such as people.




```
Output:


Person 1:
Name: John
Age: 30
Height: 6.2

Person 2:
Name: Alice
Age: 25
Height: 5.5

```





## 2. Nested Structs:
```
#include <iostream>
#include <string>
using namespace std;

// Define a struct named Address for storing address details
struct Address {
    string street;
    string city;
    int zipcode;
};

// Define a struct named Person with nested Address struct
struct Person {
    string name;
    int age;
    Address address;
};

int main() {
    // Create a Person object with nested Address object
    Person person1 = {"John", 30, {"123 Main St", "New York", 10001}};

    // Output details of person1 including nested address
    cout << "Person 1:" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Address: " << person1.address.street << ", " << person1.address.city << ", " << person1.address.zipcode << endl;

    return 0;
}
```

**Explanation:**

This code defines a Person struct containing an Address struct as a member.
An instance of Person named person1 is created and initialized with values, including an Address object.
The details of person1, including the nested address, are then printed to the console.
Use case: This demonstrates how to organize related data using nested structs, such as representing a person's contact information.

```
Output:

vbnet
Copy code
Person 1:
Name: John
Age: 30
Address: 123 Main St, New York, 10001
```


## 3. Arrays of Structs:

```
#include <iostream>
#include <string>
using namespace std;

// Define a struct named Person
struct Person {
    string name;
    int age;
    double height;
};

int main() {
    // Create an array of Person structs
    Person people[3];
    people[0] = {"John", 30, 6.2};
    people[1] = {"Alice", 25, 5.5};
    people[2] = {"Bob", 40, 5.9};

    // Output details of each person in the array
    for (int i = 0; i < 3; ++i) {
        cout << "Person " << i+1 << ":" << endl;
        cout << "Name: " << people[i].name << endl;
        cout << "Age: " << people[i].age << endl;
        cout << "Height: " << people[i].height << endl;
        cout << endl;
    }

    return 0;
}
```

**Explanation:**

This code creates an array of Person structs to store information about multiple people.
Each element of the array is assigned values to represent different individuals.
A loop iterates over the array to print the details of each person.
Use case: This demonstrates how to store and process information about multiple entities of the same type, such as managing a list of employees.

Output:

```
Person 1:
Name: John
Age: 30
Height: 6.2

Person 2:
Name: Alice
Age: 25
Height: 5.5

Person 3:
Name: Bob
Age: 40
Height: 5.9
```




## 4. Functions with Structs:
```
#include <iostream>
#include <string>
using namespace std;

// Define a struct named Person
struct Person {
    string name;
    int age;
    double height;
};

// Function to print details of a person
void printPerson(const Person& person) {
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Height: " << person.height << endl;
}

int main() {
    // Create a Person object
    Person person1 = {"John", 30, 6.2};

    // Call the printPerson function to print details of person1
    printPerson(person1);

    return 0;
}
```

**Explanation:**

This code defines a function printPerson that takes a Person struct as a parameter and prints its details.
A Person object person1 is created and initialized with values.
The printPerson function is called to print the details of person1.
Use case: This demonstrates how to define and use functions with structs, promoting code modularity and reusability.

Output:
```
makefile
Copy code
Name: John
Age: 30
Height: 6.2
```
