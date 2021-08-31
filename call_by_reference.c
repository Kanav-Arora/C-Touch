# include<stdio.h>

int swap(int* a, int* b)
{
    int temp;                               // in this function pointers are the formal parameters  
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 1,y=2;
    swap(&x,&y);                            // in this line address of x and y is passed as parameter in the function
    printf("x = %d, y = %d",x,y);
    return 0;
}