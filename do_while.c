# include<stdio.h>

int main()
{
    int i=0;
    int n;
    scanf("%d",&n);
    do
    {
        printf("%d ",i);
        i = i+1;
    }while(i<=n);
    return 0;
}