// Create a class called 'Matrix' containing constructor that initializes the number of rows
//  and the number of columns of a new Matrix object. The Matrix class has the following information:
// 1 - number of rows of matrix
// 2 - number of columns of matrix
// 3 - elements of matrix (You can use 2D vector)
// The Matrix class has functions for each of the following:
// 1 - get the number of rows
// 2 - get the number of columns
// 3 - set the elements of the matrix at a given position (i,j)
// 4 - adding two matrices.
// 5 - multiplying the two matrices
// You can assume that the dimensions are correct for the multiplication and addition.
#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    int rows;                     // Number of rows in the matrix
    int columns;                  // Number of columns in the matrix
    vector<vector<int>> elements; // 2D vector to store the elements of the matrix

public:
    // Constructor to initialize the number of rows and columns of the matrix
    Matrix(int numRows, int numColumns) {
        rows = numRows;
        columns = numColumns;
        elements.resize(rows, vector<int>(columns, 0));
    }

    // Function to get the number of rows in the matrix
    int getNumRows() {
        return rows;
    }

    // Function to get the number of columns in the matrix
    int getNumColumns() {
        return columns;
    }

    // Function to set the element at a given position (i, j) in the matrix
    void setElement(int i, int j, int value) {
        elements[i][j] = value;
    }

    // Function to add two matrices
    Matrix add(Matrix otherMatrix) {
        Matrix result(rows, columns);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                result.elements[i][j] = elements[i][j] + otherMatrix.elements[i][j];
            }
        }
        return result;
    }

    // Function to multiply two matrices
    Matrix multiply(Matrix otherMatrix) {
        int resultRows = rows;
        int resultColumns = otherMatrix.columns;
        Matrix result(resultRows, resultColumns);
        for (int i = 0; i < resultRows; i++) {
            for (int j = 0; j < resultColumns; j++) {
                for (int k = 0; k < columns; k++) {
                    result.elements[i][j] += elements[i][k] * otherMatrix.elements[k][j];
                }
            }
        }
        return result;
    }

    // Function to print the matrix
    void print() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                cout << elements[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Create two matrices
    Matrix matrix1(3, 3);
    Matrix matrix2(3, 3);

    // Set elements in matrix1
    matrix1.setElement(0, 0, 1);
    matrix1.setElement(0, 1, 2);
    matrix1.setElement(0, 2, 3);
    matrix1.setElement(1, 0, 4);
    matrix1.setElement(1, 1, 5);
    matrix1.setElement(1, 2, 6);
    matrix1.setElement(2, 0, 7);
    matrix1.setElement(2, 1, 8);
    matrix1.setElement(2, 2, 9);

    // Set elements in matrix2
    matrix2.setElement(0, 0, 9);
    matrix2.setElement(0, 1, 8);
    matrix2.setElement(0, 2, 7);
    matrix2.setElement(1, 0, 6);
    matrix2.setElement(1, 1, 5);
    matrix2.setElement(1, 2, 4);
    matrix2.setElement(2, 0, 3);
    matrix2.setElement(2, 1, 2);
    matrix2.setElement(2, 2, 1);

    // Add two matrices
    Matrix additionResult = matrix1.add(matrix2);
    cout << "Addition Result:" << endl;
    additionResult.print();

    // Multiply two matrices
    Matrix multiplicationResult = matrix1.multiply(matrix2);
    cout << "Multiplication Result:" << endl;
    multiplicationResult.print();

    return 0;
}
