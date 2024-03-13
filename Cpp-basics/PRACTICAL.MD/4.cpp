/*Write a menu driven program to perform string manipulation (without using inbuilt string functions):
a. Show address of each character in string
b. Concatenate two strings.
c. Compare two strings
d. Calculate length of the string (use pointers)
e. Convert all lowercase characters to uppercase
f. Reverse the string
g. Insert a string in another string at a user specified position*/

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

class StringManipulator {
private:
    char str[100];
public:
    // Function to display address of each character in a string
    void showAddress() {
        cout << "Addresses of each character in the string:" << endl;
        char *ptr = str;
        while (*ptr != '\0') {
            cout << *ptr << ": " << static_cast<void *>(ptr) << endl;
            ptr++;
        }
        cout << endl;
    }

    // Function to concatenate two strings
    void concatenateStrings(const char *otherStr) {
        strcat(str, otherStr);
        cout << "Concatenated string: " << str << endl << endl;
    }

    // Function to compare two strings
    int compareStrings(const char *otherStr) {
        return strcmp(str, otherStr);
    }

    // Function to calculate length of the string using pointers
    int stringLength() {
        return strlen(str);
    }

    // Function to convert all lowercase characters to uppercase
    void toUpperCase() {
        char *ptr = str;
        while (*ptr != '\0') {
            *ptr = toupper(*ptr);
            ptr++;
        }
        cout << "String in uppercase: " << str << endl << endl;
    }

    // Function to reverse the string
    void reverseString() {
        int length = strlen(str);
        for (int i = 0; i < length / 2; ++i) {
            char temp = str[i];
            str[i] = str[length - i - 1];
            str[length - i - 1] = temp;
        }
        cout << "Reversed string: " << str << endl << endl;
    }

    // Function to insert a string in another string at a specified position
    void insertString(const char *subStr, int pos) {
        int len = strlen(subStr);
        int mainLen = strlen(str);
        if (pos < 0 || pos > mainLen) {
            cout << "Invalid position." << endl << endl;
            return;
        }
        for (int i = mainLen; i >= pos; i--) {
            str[i + len] = str[i];
        }
        for (int i = 0; i < len; i++) {
            str[pos + i] = subStr[i];
        }
        cout << "Modified string after insertion: " << str << endl << endl;
    }

    // Function to set the string
    void setString(const char *newStr) {
        strcpy(str, newStr);
    }
};

int main() {
    StringManipulator strManipulator;
    int choice, pos;
    char otherStr[100];

    while (true) {
        cout << "1. Show address of each character in string" << endl;
        cout << "2. Concatenate two strings" << endl;
        cout << "3. Compare two strings" << endl;
        cout << "4. Calculate length of the string" << endl;
        cout << "5. Convert all lowercase characters to uppercase" << endl;
        cout << "6. Reverse the string" << endl;
        cout << "7. Insert a string in another string at a specified position" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a string: ";
                cin >> otherStr;
                strManipulator.setString(otherStr);
                strManipulator.showAddress();
                break;
            case 2:
                cout << "Enter first string: ";
                cin >> otherStr;
                strManipulator.setString(otherStr);
                cout << "Enter second string: ";
                cin >> otherStr;
                strManipulator.concatenateStrings(otherStr);
                break;
            case 3:
                cout << "Enter first string: ";
                cin >> otherStr;
                strManipulator.setString(otherStr);
                cout << "Enter second string: ";
                cin >> otherStr;
                if (strManipulator.compareStrings(otherStr) == 0)
                    cout << "Strings are equal." << endl << endl;
                else
                    cout << "Strings are not equal." << endl << endl;
                break;
            case 4:
                cout << "Enter a string: ";
                cin >> otherStr;
                strManipulator.setString(otherStr);
                cout << "Length of the string: " << strManipulator.stringLength() << endl << endl;
                break;
            case 5:
                cout << "Enter a string: ";
                cin >> otherStr;
                strManipulator.setString(otherStr);
                strManipulator.toUpperCase();
                break;
            case 6:
                cout << "Enter a string: ";
                cin >> otherStr;
                strManipulator.setString(otherStr);
                strManipulator.reverseString();
                break;
            case 7:
                cout << "Enter main string: ";
                cin >> otherStr;
                strManipulator.setString(otherStr);
                cout << "Enter string to insert: ";
                cin >> otherStr;
                cout << "Enter position to insert: ";
                cin >> pos;
                strManipulator.insertString(otherStr, pos);
                break;
            case 8:
                cout << "Exiting...";
                exit(0);
            default:
                cout << "Invalid choice." << endl << endl;
        }
    }
    return 0;
}
