# include<stdio.h>

int add(int a, int b)
{
    return a+b;                 // a and b are the formal parameters which are replaced by the actual parameters.
}

int main()
{
    int x =1,y=2;               // x and y are the actual parameters passed while calling the function.
    int sum = add(x,y);
    printf("%d",sum);
    return 0;
}