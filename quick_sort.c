#include<stdio.h>
void swap(int *a, int *b){
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[] , int start, int end )
{
    int pos = start;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] <= arr[end]){
            swap(&arr[i],&arr[pos]);
            pos++;
        }
    }
    return pos - 1;
    
}

void quick_sort(int arr[], int start, int end)
{
    if (start >= end)
    return;
    int pivot = partition(arr, start, end);
    // left array
    quick_sort(arr, start,pivot-1);
    // right array
   
    quick_sort(arr, pivot+1, end);
   
}


int main(){
    int a[] = {4,3,0,8,9,2};
    int n = sizeof(a)/sizeof(a[0]);
    quick_sort(a, 0, n-1);
    for (int i = 0; i < n-1; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}