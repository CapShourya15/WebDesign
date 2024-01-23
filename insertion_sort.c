#include <stdio.h>

void insertion_sort(int arr[], int start, int end)
{
    for (int i = 1; i < end; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j-1]>arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
            else
            {
                break;
            }
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    int a[] = {2,3,5,2,3,1,6};
    int n = sizeof(a)/sizeof(a[0]);
    insertion_sort(a,0, n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    
    return 0;
}
