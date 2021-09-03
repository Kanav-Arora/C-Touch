/*

    Typedef can be used with structures
    The code in the braces is part of prev_no

*/

# include<stdio.h>

typedef struct Student 
{
    int id;
} std;


int main()
{
    std s1;                     // we don't need tu write "struct Student s1" instead we can write "std s1"
    s1.id =1;               
    printf("%d",s1.id);
    return 0;
}