# include<stdio.h>

int func1(int arr[])
{
    int sum=0;
    for(int i=0; i<4; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

// passing pointer to an array as a formal argument
int func2(int* ptrarr, int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=*(ptrarr+i);
    }
    return sum;
}

int main()
{   
    int arr[4] = {1,2,3,4};
    int sum1 = func1(arr);
    int sum2 = func2(arr,4);
    printf("%d\n",sum1);
    printf("%d",sum2);
    
    return 0;
}