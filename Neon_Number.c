#include<stdio.h>
int fun(int n)
{
    int x,d,sum=0;
    x=n*n;
    while(x)
    {
        d=x%10;
        sum+=d;
        x=x/10;
    }
    if(sum==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(fun(n))
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}