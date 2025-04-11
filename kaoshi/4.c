#include<stdio.h>

int i(int k);
int main()
{
	int x;
	scanf("%d",&x);
	int j,z=0,w=x,m=0;
	printf("%d,",w);
	
	
	while(x>0)
	{
		j=x%10;
		z=z+i(j);
		x=x/10;
		
		if(x>0)
		{
			printf("%d!+",j);
		}
		else
		{
			printf("%d!",j);
		}
		m++;
	}
	
	printf("=%d",z);
	if(w==z)
	{
		printf("\nYes");
	}
	else
	{
		printf("\nNo");
	}
	
	return 0;
}
int i(int k)
{
	int o=1,s=1;
	for(o=1;o<=k;o++)
	{
		s=s*o;
	}
	return s;
}
