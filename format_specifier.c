# include<stdio.h>

int main()
{
    int a = 4;
    float b = 6.888;

    printf("The value for a is %d and value for b is %f\n", a ,b);
/*
    %d and %f are format specifiers for decimal and float values.
    %d and %f are the placeholders and are replaced with the respective values.
*/

    printf("The value for a is %d and value for b is %.4f\n", a ,b);
//  %.bf: here b is the precision of the printed number


    printf("The value for a is %d and value for b is %8.4f\n", a ,b);
/*  
    %a.bf: here a is the total literal width. If a is greater than length of the number the spaces 
    will be added before the placeholder. 
*/

    printf("The value for a is %d and value for b is %-8.4f\n", a ,b);
/*  
    %-a.bf: here a is the total literal width. If a is greater than length of the number the spaces 
    will be added after the placeholder. 
*/

    return 0;
}