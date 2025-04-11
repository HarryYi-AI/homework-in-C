#include<stdio.h>

struct chengji
{
	char x[6];
	char a[10];
	int g;
};
int main()
{
	int n;
	scanf("%d",&n);
	int i ;
	struct chengji xue[n];
	for (i=0;i<n;i++)
	{
		scanf("%s %s %d",&xue[i].x,&xue[i].a,&xue[i].g);
		
	}
	int sum=0;
	double average;
	
	for (i=0;i<n;i++)
	{
		sum=sum+xue[i].g;
	}
	average=sum/n;
	printf("%0.2f",average);
	for (i=0;i<n;i++)
	{
		if (xue[i].g<average)
		{
			printf("%s %s",xue[i].a,xue[i].x);
		}
	}
}
