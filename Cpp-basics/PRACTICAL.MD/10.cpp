/*Create a Triangle class. Add exception handling statements to ensure the following
conditions: all sides are greater than 0 and sum of any two sides are greater than the
third side. The class should also have overloaded functions for calculating the area of
a right angled triangle as well as using Heron's formula to calculate the area of any type
of triangle. */

#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
    float a, b, c;

public:
    Triangle(float s1, float s2, float s3) {
        if (s1 <= 0 || s2 <= 0 || s3 <= 0) {
            throw "All sides must be greater than 0";
        }
        if (s1 + s2 <= s3 || s2 + s3 <= s1 || s1 + s3 <= s2) {
            throw "Sum of any two sides must be greater than the third side";
        }
        a = s1;
        b = s2;
        c = s3;
    }

    float area() {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    float area(float base, float height) {
        return 0.5 * base * height;
    }
};

int main() {
    float s1, s2, s3;
    cout << "Enter the sides of the triangle: ";
    cin >> s1 >> s2 >> s3;
    try {
        Triangle t(s1, s2, s3);
        if(sqrt(s1*s1 + s2*s2) == s3 || sqrt(s2*s2 + s3*s3) == s1 || sqrt(s1*s1 + s3*s3) == s2){
            cout << "The triangle is a right angled triangle." << endl;
            cout << "Area of the triangle by right angled triangle formula: " << t.area(s1, s2) << endl;
        }
        else{
            cout << "The triangle is not a right angled triangle." << endl;
            cout << "Area of the triangle by Heron's formula: " << t.area() << endl;
        }


    } catch (const char *msg) {
        cerr << "Error: " << msg << endl;
    }
    return 0;
}
