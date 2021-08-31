# include<stdio.h>

int fac(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==0)
    {
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}

int main()
{
    int inp =0;
    scanf("%d",&inp);
    int res = fac(inp);
    printf("%d",res);
    return 0;
}