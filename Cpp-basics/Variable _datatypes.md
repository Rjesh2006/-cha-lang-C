
# Common Variables and Data Types in C++

1. **Integer Variable (`int`)**:

   - **Explanation**: Used to store integer values.

   - **Example**:

     ```cpp
     #include <iostream>
     using namespace std;
     
     int main() {
         int age; // Declaration
         age = 25; // Initialization
         cout << "Age: " << age << endl;
         return 0;
     }
     ```

     **Output**:
     ```
     Age: 25
     ```

   - **Typical Memory Size**: 4 bytes

2. **Floating-Point Variable (`float`)**:

   - **Explanation**: Used to store single-precision floating-point numbers.

   - **Example**:

     ```cpp
     #include <iostream>
     using namespace std;
     
     int main() {
         float temperature; // Declaration
         temperature = 98.6; // Initialization
         cout << "Temperature: " << temperature << endl;
         return 0;
     }
     ```

     **Output**:
     ```
     Temperature: 98.6
     ```

   - **Typical Memory Size**: 4 bytes

3. **Character Variable (`char`)**:

   - **Explanation**: Used to store individual characters.

   - **Example**:

     ```cpp
     #include <iostream>
     using namespace std;
     
     int main() {
         char grade; // Declaration
         grade = 'A'; // Initialization
         cout << "Grade: " << grade << endl;
         return 0;
     }
     ```

     **Output**:
     ```
     Grade: A
     ```

   - **Typical Memory Size**: 1 byte

4. **Boolean Variable (`bool`)**:

   - **Explanation**: Used to store Boolean values (`true` or `false`).

   - **Example**:

     ```cpp
     #include <iostream>
     using namespace std;
     
     int main() {
         bool isRaining = true; // Declaration and Initialization
         cout << "Is it raining? " << (isRaining ? "Yes" : "No") << endl;
         return 0;
     }
     ```

     **Output**:
     ```
     Is it raining? Yes
     ```

   - **Typical Memory Size**: 1 byte

5. **String Variable (`string`)**:

   - **Explanation**: Used to store sequences of characters.

   - **Example**:

     ```cpp
     #include <iostream>
     #include <string>
     using namespace std;
     
     int main() {
         string name = "John Doe"; // Declaration and Initialization
         cout << "Name: " << name << endl;
         return 0;
     }
     ```

     **Output**:
     ```
     Name: John Doe
     ```

   - **Typical Memory Size**: Depends on the implementation

6. **Data Type Memory Sizes**:

   - **Explanation**: The memory sizes of data types can vary depending on the system architecture, but here are the typical sizes for common data types in C++.

   - **Typical Memory Sizes**:
     - int: 4 bytes
     - float: 4 bytes
     - double: 8 bytes
     - char: 1 byte
     - bool: 1 byte
     - short int: 2 bytes
     - long int: 4 bytes
     - long long int: 8 bytes
     - unsigned int: Same as `int`
     - signed int: Same as `int`
     - wchar_t: Typically 2 or 4 bytes
     - size_t: Depends on the system architecture, commonly 4 or 8 bytes
     - ptrdiff_t: Depends on the system architecture, commonly 4 or 8 bytes
     - long double: Typically 12 or 16 bytes
     - string: Depends on the implementation
``` 

This version has added space between each point for improved readability.
