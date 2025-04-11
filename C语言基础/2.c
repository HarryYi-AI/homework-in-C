#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i=0,j=0,k=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for (j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(k=i-1;k>0;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}

