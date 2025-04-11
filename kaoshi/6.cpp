#include<stdio.h>
int main()
{
	char c;
	float sum=0,averg=0;
	int d=0;
	printf(":\n");
	while((c=getchar())!='\n')
	{
		if (c>='0'&&c<='9')
		{
			sum=sum+(float)c;
			d+=1;
		}
	}
	averg=sum/d;
	printf("%.2f",averg);
	return 0;
}
