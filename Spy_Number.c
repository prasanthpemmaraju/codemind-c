#include<stdio.h>
int main()
{
    int i,n,k,d,m=1,sum=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        sum=sum+d;
        m=m*d;
        n=n/10;
    }
    if(sum==m)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}