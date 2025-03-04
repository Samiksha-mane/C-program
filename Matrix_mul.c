#include <stdio.h>

#define MAX 10  // Define maximum matrix size

void multiplyMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int r1, int c1, int r2, int c2) {
    // Initializing result matrix to 0
    int i,j,k;
    for ( i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for ( k = 0; k < c1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int row, int col) {
	int i,j;
    for ( i = 0; i < row; i++) {
        for ( j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r1, c1, r2, c2;
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];

    // Input matrix dimensions
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Error! Columns of first matrix must match rows of second matrix.\n");
        return 1;
    }

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    int i,j;
    for (i = 0; i < r1; i++)
        for ( j = 0; j < c1; j++)
            scanf("%d", &first[i][j]);

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
        for ( j = 0; j < c2; j++)
            scanf("%d", &second[i][j]);

    // Multiply matrices
    multiplyMatrices(first, second, result, r1, c1, r2, c2);

    // Display result
    printf("Resultant Matrix:\n");
    displayMatrix(result, r1, c2);

    return 0;
}

