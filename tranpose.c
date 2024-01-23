#include <stdio.h>
void input_matrix(int row,int col, int mat[row][col])
{// takes input  for matix
    for (int i = 1; i <=row; i++)
    {
        for ( int j = 1; j <= col; j++)
        {
            printf("Enter the value of mat[%d][%d]\n",i,j);
            scanf("%d",&mat[i][j]);
        }
        
    }
        
}
void print_matrix(int col, int row, int mat[row][col])
{// print matix 
    for ( int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    
}

void transpose_matrix(int col, int row, int mat[row][col])
{   int transpose[col][row];
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
           transpose[i][j]= mat[j][i];
        }
        
    }
    printf("Transpose of matrix\n");
    print_matrix(row, col, transpose);
}
int main()
{
    int row, col;
    printf("Enter the row and column of matrix\n");
    scanf("%d %d",&row, &col);
    int mat[row][col];
    input_matrix(row, col,mat);
    print_matrix(row, col, mat);
    transpose_matrix(row, col, mat);
    return 0;
}