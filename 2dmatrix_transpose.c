#include <stdio.h>

// Function to input a matrix from the user
void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter elements of the matrix:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at position [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Matrix:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate and print the transpose of a matrix
void transposeMatrix(int rows, int cols, int matrix[rows][cols]) {
    int transpose[cols][rows];  // Transpose will have rows and cols swapped

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    // Print the transpose matrix
    printf("\nTranspose of the matrix:\n");
    printMatrix(cols, rows, transpose);
}

int main() {
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];  // Declare the matrix

    // Input the matrix
    inputMatrix(rows, cols, matrix);

    // Print the original matrix
    printMatrix(rows, cols, matrix);

    // Print the transpose of the matrix
    transposeMatrix(rows, cols, matrix);

    return 0;
}
