#include <stdio.h>

int main() 
{
    int rows, cols;
    
    // Getting the matrix size
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    // Input matrix1
    printf("Enter elements of Matrix 1:\n");
    int i,j;
    for ( i = 0; i < rows; ++i) {
        for ( j = 0; j < cols; ++j) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input matrix2
    printf("Enter elements of Matrix 2:\n");
    for ( i = 0; i < rows; ++i) {
    	int i;j;
        for ( j = 0; j < cols; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding the matrices
    for (i = 0; i < rows; ++i) {
    	int i,j;
        for ( j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the result
    printf("Resultant Matrix after Addition:\n");
    for ( i = 0; i < rows; ++i) {
    	int j;
        for ( j = 0; j < cols; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

