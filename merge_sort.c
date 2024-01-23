#include <stdio.h>

int merge(int arr[], int start, int mid, int end)
{
    int temp[end-start+1];
    int left = start, right = mid+1, index = 0;

    while(left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index]= arr[left];
            index++;
            left++;
        }
        else
        {
            temp[index] = arr[right];
            index++;
            right++;
        }
    }
    while (left<= mid)
    {
        temp[index]= arr[left];
        index++;
        left++;
    }
     while (right<= end)
    {
        temp[index]= arr[right];
        index++;
        right++;
    }
    index = 0;
    while (start<= end)
    {
        arr[start] = temp[index];
        start++,index++;
    }
    return 0;
}

void merge_sort(int arr[], int start, int end)
{
    if (start == end){
        return;
    }
    int mid = start + (end - start)/2;
    // element less than mid value
    merge_sort(arr,start, mid);
    // element greater than mid value
    merge_sort(arr, mid+1, end);
    // now merge all the sorted element
    merge(arr, start, mid, end);
}



int main()
{
    int a[] = {2,4,5,4,2,7,6,7};
    int num_a = sizeof(a)/sizeof(a[0]);
    merge_sort(a, 0, num_a);
    printf("Here is sorted array:");
    for (int i = 0; i < num_a; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}