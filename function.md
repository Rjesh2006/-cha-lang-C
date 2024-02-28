***User-Defined Functions:
Definition: User-defined functions are custom-built by programmers to address specific tasks. They allow us to divide complex problems into smaller, manageable chunks.
Syntax for Function Declaration:

'''
returnType functionName(parameter1, parameter2, ...) {
    // function body
}
'''

returnType: Specifies the type of value returned by the function (e.g., int, void, etc.).
functionName: The identifier for the function.
parameter1, parameter2, …: Optional parameters (arguments) that the function can accept.
Example 1: Displaying a Text:

'''
#include <iostream>
using namespace std;

// Function declaration
void greet() {
    cout << "Hello there!";
}

int main() {
    // Calling the function
    greet();
    return 0;
}
'''
Output:
Hello there!



Example 2: Function with Parameters:

'''
#include <iostream>
using namespace std;

// Display a number
void displayNum(int n1, float n2) {
    cout << "The int number is " << n1;
    cout << "The double number is " << n2;
}

int main() {
    int num1 = 5;
    double num2 = 5.5;

    // Calling the function
    displayNum(num1, num2);
    return 0;
}
'''

Output:
The int number is 5
The double number is 5.5



- Standard Library Functions:

  
These functions are predefined in C++ and can be directly used in our programs. For example, the main() function is a standard library function.
Syntax for Creating a Function:
void myFunction() {
    // Code to be executed
}

- Replace myFunction with your desired function name.
Example: Using a Simple Function:


#include <iostream>
using namespace std;

// A simple function
void myFunction() {
    cout << "Hello from myFunction!";
}

int main() {
    // Calling the function
    myFunction();
    return 0;
}


Output:
Hello from myFunction!
