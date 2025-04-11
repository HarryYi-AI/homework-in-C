#include<stdio.h>

struct chengji
{
	char x[6];
	int h;
	int g;
	int m;
};
int main()
{
	int n;
	scanf("%d",&n);
	int i ;
	struct chengji xue[n];
	for (i=0;i<n;i++)
	{
		scanf("%s %d %d %d",&xue[i].x,&xue[i].h,&xue[i].g,&xue[i].m);
		
	}

	
	for (i=0;i<n;i++)
	{
		printf("\n");
		printf("%s %0.2f ",xue[i].x,0.1*10*xue[i].h+xue[i].g-xue[i].m);
	}
	return 0;

	
}

