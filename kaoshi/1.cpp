#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int i,r=0;
	if(x>=100&&x<=999)
	{
		while(x>0)
	{
		i=x%10;
		r=10*r+i;
		x=x/10;
	} 
	printf("%d",r);
	}
	else
	{
		printf("%d",-1);
	}
	
	
	return 0;
}
