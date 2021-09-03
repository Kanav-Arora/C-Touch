# include<stdio.h>


int num =7;
void func1()
{
    // int num = 6;                 local variable has more precedence than a global variable
    printf("%d\n",num);            // if we comment out line 7 then 6 will be printed
}

int stat()
{
    static int var;         // static variables don't need to be initialized, compiler will automatically assign 0
    var++;                  // var=8; var=9
    return var*10;
}
int main()
{
    func1();
    int a = stat();
    printf("%d\n",a);
    int b = stat();
    printf("%d\n",b);
    return 0;
}