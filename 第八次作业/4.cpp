#include<stdio.h>
struct shu 
{
	char a[31];
	double p;
};
int main ()
{
	int n;
	scanf("%d",&n);
	getchar();
	struct shu shu_[n],t; 
	int i ;
	for (i=0;i<n;i++)
	{
		gets(shu_[i].a); 
		scanf("%lf",&shu_[i].p);
		getchar();
	}
	for (i=0;i<n;i++)
	{
		if (shu_[0].p<shu_[i].p)
		{
			t=shu_[0];
			shu_[0]=shu_[i];
			shu_[i]=t;
		}
	}
	printf("%0.2f, %s",shu_[0].p,shu_[0].a);
	for (i=0;i<n;i++)
	{
		if (shu_[0].p>shu_[i].p)
		{
			t=shu_[0];
			shu_[0]=shu_[i];
			shu_[i]=t;
		}
	}
	printf("\n");
	printf("%0.2f, %s",shu_[0].p,shu_[0].a);
	return 0;
}

