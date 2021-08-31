/*
    Array

    Arrays are stored at contiguous memory. Its a collection of same type of datatypes.


*/


# include<stdio.h>

int main()
{
    int marks1[3];      // Array declaration
    marks1[0] = 10;     // Array initialization
    marks1[1] = 20;
    marks1[2] = 30;

    int marks2[3] = {10,20,30};     // Size is not required (optional)

    return 0;
}