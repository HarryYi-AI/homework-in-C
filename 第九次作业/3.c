#include<stdio.h>

int main()
{
	FILE *fp,*fp1;
	int n,min=100,max=0,i=0;
	float average,k=0.0;
	fp=fopen("score.txt","r");

	while(!feof(fp)){
		fscanf(fp,"%d",&n);
		k+=n;
		i++;
		if(min>n)
		min=n;
		if(max<n)
		max=n;
	}
	average=k/i;
	fp1=fopen("result.txt","w+");
	fprintf(fp1,"%.2f %d %d",average,max,min);
	fclose(fp);
	fclose(fp1);
	return 0;
}
