/*
                                                Memmory Allocation
    - Code/Text Segment
    - Static/Global variables
        - Data segment (initialized segment)
        - BSS (Block Started by Symbol) segment (uninitialized segment)
    - Stack (Static Memory Allocation)
        Initially some memory will be reserved for main() in stack. This is also called as Stack Frame of Main().
        Stack frame consists the list of all the variables in the method.

        Stack follows LIFO(Last-In-First-Out) approach. The function that opens first, pops at last.

*/

# include<stdio.h>

void func1(){
    int id = 10;
    printf("%d\n",id);
}

int main()
{
    func1();
    return 0;
}

/*

    So here stack structure is:
        main()
        func1()
        printf()
    ----------------
        printf()
        func1()
        main()

                                            Stack Overflow

    Compiler reserves some space for the stack in the memory. If this space gets exhausted due to some reason, that situation 
    is called as Stack Overflow.
    for e.g Recursion with wrong/no base condition. 
*/