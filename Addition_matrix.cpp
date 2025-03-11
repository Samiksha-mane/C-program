#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns of the matrices: ";
    cin >> rows >> cols;

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    // Input matrix1
    cout << "Enter elements of Matrix 1:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix1[i][j];
        }
    }

    // Input matrix2
    cout << "Enter elements of Matrix 2:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix2[i][j];
        }
    }

    // Adding the two matrices
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the result
    cout << "Resultant Matrix after Addition:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

