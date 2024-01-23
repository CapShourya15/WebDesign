#include <stdio.h>
// function to taks input of matix element.
void input(int rows, int cols, int arr[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter the value of element[%d][%d]: ",i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
        
    }
    
}

// function to display element of matix.
void show_matrix(int rows, int cols, int arr[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
        
    }
    
}

// function to add matirices.
void addition_of_matrix(int rows, int cols, int arr1[rows][cols], int arr2[rows][cols], int arr3[rows][cols])
{
     for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
        
    }

}

int main()
{
    int rows = 0 ,cols = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];
    printf("Enter the element of first matix\n");
    input(rows, cols,matrix1);

    printf("Enter the element of second matix\n");
    input(rows, cols, matrix2);

    printf("First Mattrix;\n");
    show_matrix(rows,cols, matrix1);

    printf("Second Matrix\n");
    show_matrix(rows, cols, matrix2);

    addition_of_matrix(rows,cols, matrix1, matrix2,sum);

    printf("Here is the sum of first and second matrix\n");
    show_matrix(rows, cols, sum);
    return 0;
}
