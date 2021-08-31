/*
    Pointer

    Pointer is a variable that stores address of another variable.
    It can be of type int, char, array, function.
    Size of pointer depends on the architecture. For example, for a 32 bit system size of pointer will be 4 bytes

    '&' return the address of a variable
    '*' is a dereference operator also called indirection operator, is used to get value from a given address.

*/


# include<stdio.h>

int main()
{
    int a =5;
    int *ptra = &a;
    printf("The value of a is %d\n",a);
    printf("The address of a is %x\n",&a);
    printf("The value of a is %d\n",*ptra);
    printf("The address of a is %x\n",ptra);
    printf("The address of ptra is %x\n",&ptra);

    return 0;
}

/*
    Null Pointer
    A pointer that is not assigned any value but null
    We can use it to assign val to a pointer variable
    int *ptr2 = NULL;
    this will prevent garbage value

*/