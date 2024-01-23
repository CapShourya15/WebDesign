#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

int buble_sort(int arr[], int end)
{
    for (int i = end; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if(arr[j]>=arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
        
    }
    
}

int main()
{
    int a[] = {2,3,4,5,3,2,4,6};
    int n = sizeof(a)/sizeof(a[0]);
    buble_sort(a, n);
    printf("%d\n",n);
    printf("Here is sorted array:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}