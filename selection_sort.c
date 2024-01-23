#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[], int start, int end)
{
    for (int i = 0; i < end-1; i++)
    {
         int min_index = i;
        for (int j = i+1; j < end ; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
            swap(&arr[min_index],&arr[i]);
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int a[] = {2,6,7,3,3,8,1};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Unsortd array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    selection_sort(a, 0, n);
    printf("Here is sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
