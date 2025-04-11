#include<stdio.h>

int jie(int x );
int main()
{
	int x;
	int y;
	scanf("%d",&x);
	y=jie(x);
	
	if(y!=-1)
	{
		printf("%d",y);	
	}
	else
	{
		printf("No Answer");
	}
	return 0;
}
int jie(int x )
{
	int i,j;
	for(j=1;j<=9;j++)
	{
		for(i=1;i<j;i++)
		{
			if(((10*i+j)*(10*j+i))==x)
			{
				return 10*i+j;
			}
			
		}
	}
	
			
	return -1;
			
}
