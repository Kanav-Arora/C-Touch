/*
                            Dynamic Memory Allocation

    In dynamic memory allocation size of data structure changes at runtime.
    four function:
    - Malloc
        Stands for `Memory Allocation`
        It reserves block of memory with given amount of bytes
        Its returns void pointer which can be typecasted as per requirements
        If space is insufficient, allocation of memory fails and it returns a null pointer.
        All value are initialized to garbage values.

        Syntax:
                            ptr = (ptr-type*) malloc(size_in_bytes);
    - Calloc
        Stands for `Contiguous Allocation`
        It reserves n blocks of memory with given amount of bytes
        Its returns void pointer which can be typecasted as per requirements
        If space is insufficient, allocation of memory fails and it returns a null pointer.
        All value are initialized to 0.

        Syntax:
                            ptr = (ptr-type*) calloc(n,size_in_bytes);
        
    - Realloc
        Stands for `Reallocation`
        If dynamically allocated memory is insufficient we can change its size

        Syntax:
                            ptr = (ptr-type*) realloc(ptr,new_size_in_bytes);

    - Free
        Is used to free memory

        Syntax:
                            free(ptr);

*/


# include<stdio.h>
# include<stdlib.h>
int main()
{
    int* ptr;
    ptr = (int*) malloc(10*sizeof(int));
    return 0;
}