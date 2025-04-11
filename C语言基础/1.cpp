#include<stdio.h>

int main()
{
	int a ,b,c;
	for(a=0;a<10;a++)
	{
		for (b=0;b<10;b++)
		{
			for (c=0;c<10;c++)
			{
				if (101*(a+c)+20*b==1333)
				{
					printf("%d %d %d \n",a,b,c);
				}
			}
		}
	}
	
 } 
