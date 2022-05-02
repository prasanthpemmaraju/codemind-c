#include<stdio.h>
int main()
{
	int p,v,r=2,l=1;
	scanf("%d%d",&p,&v);
	while(1)
	{
	
		if(p%r==0 && v%r==0)
		{
			p=p/r;
			v=v/r;
			l=l*r;
		}
		else
		{
			r++;
		}
		if(p<r || v<r)
		{
			break;
		}
		
	}
	printf("%d",l*p*v);
	return 0;
}