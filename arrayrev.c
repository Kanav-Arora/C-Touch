# include<stdio.h>

void arr_rev(int arr[], int n)
{
    int size_arr = n;
    for(int i=0; i<size_arr/2; i++)
    {
        int temp = 0;
        temp = arr[i];
        arr[i] = arr[size_arr-i-1];
        arr[size_arr-i-1] = temp;
    }
}
int main()
{
    int arr[] = {1,2,3,4};
    int n = 4;
    arr_rev(arr,4);
    for(int i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}