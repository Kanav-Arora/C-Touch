# include<stdio.h>
# include<string.h>

typedef struct Student
{
    int id;
    float marks;
    char name[25];
}std;

typedef union Student1
{
    int id;
    float marks;
    char name[25];
}std1;

int main()
{
    std s1;
    s1.id = 1;
    s1.marks = 95.5;
    strcpy(s1.name,"Kanav");
    printf("%d\n",s1.id);
    printf("%f\n",s1.marks);
    printf("%s\n",s1.name);
    std1 s2;
    s2.id = 1;
    s2.marks = 95.5;
    strcpy(s2.name,"Kanav");
    printf("%d\n",s2.id);                   // space is provided to name attribute bcoz name attribute is the largest in terms  of size
    printf("%f\n",s2.marks);
    printf("%s\n",s2.name);
    return 0;
}