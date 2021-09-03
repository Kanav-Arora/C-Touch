#include <stdio.h>

// structures are used to make user defined datatypes
struct Students
{
    int id;
    char name[20];
    float marks;
};
int main()
{
    struct Students s1 = {1, "Kanav", 95};
    printf("%d\n", s1.id); // "." is called as Structure Member Operator
    printf("%s\n", s1.name);
    printf("%.2f\n", s1.marks);
    return 0;
}