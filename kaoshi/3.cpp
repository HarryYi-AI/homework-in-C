#include<stdio.h>

int main()
{
	int x,y;
	char c;
	double z;
	scanf("%d %d %c",&x,&y,&c);
	if(c=='*')
	{
		printf("%d",x*y);
	}
	else if(c=='+')
	{
		printf("%d",x+y);
	}
	else if(c=='-')
	{
		printf("%d",x-y);
	}
	else if (c=='/')
	{
		if(y==0)
		{
			return -1;
		}
		else 
		{
			
			if (x%y==0)
			printf("%d",x/y);
			else
			{
				z=1.0*x/(1.0*y);
				printf("%.2f",z);
			}
		}
		
	}
	return 0;
}
