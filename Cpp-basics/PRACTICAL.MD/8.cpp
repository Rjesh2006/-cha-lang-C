/*Create a Matrix class. Write a menu-driven program to perform following Matrix
operations (exceptions should be thrown by the functions if matrices passed to them are
incompatible and handled by the main() function):*/
// a. Sum
// b. Product
// c. Transpose


#include <iostream>
using namespace std;

class Matrix {
    int rows, cols;
    int **matrix; // here **matrix is a pointer to a pointer, which is used to create a 2D array
    

public:
    Matrix(int r, int c) {
        
        rows = r;
        cols = c;
        matrix = new int *[rows]; 
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols];  
        }
    }


    void inputMatrix() {
        cout << "Enter the elements of the matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> matrix[i][j];
            }
        }
    }

    void displayMatrix() {
        cout << "Matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix sum(Matrix m) {
        if (rows != m.rows || cols != m.cols) {
            throw "Matrices are not compatible for addition";
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.matrix[i][j] = matrix[i][j] + m.matrix[i][j];
            }
        }
        return result;
    }

    Matrix product(Matrix m) {
        if (cols != m.rows) {
            throw "Matrices are not compatible for multiplication";
        }
        Matrix result(rows, m.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < m.cols; j++) {
                result.matrix[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.matrix[i][j] += matrix[i][k] * m.matrix[k][j];
                }
            }
        }
        return result;
    }

    Matrix transpose() {
        Matrix result(cols, rows);
        for (int i = 0; i < cols; i++) {
            for (int j = 0; j < rows; j++) {
                result.matrix[i][j] = matrix[j][i];
            }
        }
        return result;
    }
};

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;
    Matrix m1(rows, cols);
    m1.inputMatrix();

    int choice;
    cout << "Enter the operation to perform:" << endl;
    cout << "1. Sum" << endl;
    cout << "2. Product" << endl;
    cout << "3. Transpose" << endl;
    cin >> choice;

    Matrix result(rows, cols);
    switch (choice) {
    case 1: {
        Matrix m2(rows, cols);
        m2.inputMatrix();
        try {
            result = m1.sum(m2);
            result.displayMatrix();
        } catch (const char *msg) {
            cerr << msg << endl;
        }
        break;
    }
    case 2: {
        int rows2, cols2;
        cout << "Enter the number of rows and columns of the second matrix: ";
        cin >> rows2 >> cols2;
        Matrix m2(rows2, cols2);
        m2.inputMatrix();
        try {
            result = m1.product(m2);
            result.displayMatrix();
        } catch (const char *msg) {
            cerr << msg << endl;
        }
        break;
    }
    case 3:
        result = m1.transpose();
        result.displayMatrix();
        break;
    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}
