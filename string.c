# include<stdio.h>

void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')             // '\0' is a null character
    {
        printf("%c",str[i]);
        i++;
    }
}

int main()
{
    char name[50];
    gets(name);                     // function in stdio.h
    //printf("%s\n",name);
    //puts(name);                     // function in stdio.h
    char str[] = {'k','a','n','a','v'};
    printstr(str);
    return 0;
}   