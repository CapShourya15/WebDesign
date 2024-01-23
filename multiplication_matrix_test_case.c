#include <stdio.h>

void input(int rows, int cols, int arr[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element[%d][%d]: ",i+1, j+1);
            scanf("%d",&arr[i][j]);
        }
        
    }
}

void display(int rows, int cols, int arr[rows][cols])
{
    printf("Here is matix \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
}

void multipication(int rows1, int cols1, int rows2, int cols2, int arr1[rows1][cols1], int arr2[rows2][cols2], int arr3[rows1][cols2])
{
    
    int p = 0;
    if (cols1 != rows2)
    {
        printf("Can't multiply the given matrix.");
    }
    else
    printf("Product: \n");
    {
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < cols2; j++)
            {
                for (int k = 0; k < cols1; k++)
                {
                    p += (arr1[i][k])*(arr2[k][j]);
                }
                arr3[i][j] = p;
                p = 0;
            }
            
        }
        
    }
}

void test_cases()
{
    // test case 1
    printf("testing.....");
    int mat1[3][2] ={{3,4},{3,5},{1,2}};
    int mat2[2][4] = {{3,4,5,2},{3,4,7,2}};
    display(2,3,mat1);
    display(2,4,mat2);
    int result[3][4];
    multipication(3,4,2,4,mat1,mat2,result);
    
    
    

}


int main(int argc, char const *argv[])
{
    int rows1, cols1 = 0;
    int rows2 , cols2 = 0;

    int mat1[rows1][cols1], mat2[rows2][cols2], product[rows1][cols2];
    // // for first matrix
    // printf("First Matrix\n");
    // printf("Enter the number of rows and columns\n");
    // scanf("%d%d",&rows1, &cols1);
    // input(rows1, cols1, mat1);
    // printf("Matrix 1 \n");
    // display(rows1, cols1,mat1);

    // // for second matrix
    // printf("Second Matrix\n");
    // printf("Enter the number of rows and columns\n");
    // scanf("%d%d",&rows2, &cols2);
    // input(rows2, cols2, mat2);
    // printf("Matrix 2\n");
    // display(rows2, cols2, mat2);

    // //product of two matrix
    // printf("Here is the product\n");
    // multipication(rows1, cols1, rows2, cols2, mat1, mat2, product);
    // display(rows1, cols2, product);

    test_cases();
    return 0;
}
