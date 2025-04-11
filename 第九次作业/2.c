#include<stdio.h>

void save(int a[][10],int n)
{
	FILE *fp;
	fp =fopen ("file.out","w");
	int i ,j;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			fprintf(fp,"%5d",a[i][j]);
		}
		fprintf(fp,"\n");
	}
	fclose(fp);
}

int main ()
{

	int n;
	int i=0,j=0;
	scanf("%d",&n);
	int a[10][10];
	int k=1;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
			a[i][j]=0;
		}
		printf("\n");
	}
	a[0][0]=1;
	i=0;
	j=0;
	while(k<n*n)
	{
		while(j<n-1&&!a[i][j+1])
		{
			a[i][++j]=++k;
		}
		while(i<n-1&&!a[i+1][j])
		{
			a[++i][j]=++k;
		}
		while(j>0&&!a[i][j-1])
		{
			a[i][--j]=++k;
		}
		while(i>0&&!a[i-1][j])
		{
			a[--i][j]=++k;
		}
	}
	
	save (a,n);
	return 0;
	
}
//2020/3/31
//#include<stdio.h>
//#include<string.h>
//
//void save(int a[][10],int n)
//{
//    FILE *fp;
//    fp = fopen("file.out","w");
//    int i,j;
//    for(i = 0;i<n;i++)
//    {
//        for(j = 0;j<n;j++)
//        {
//            fprintf(fp,"%5d",a[i][j]);
//        }
//        fprintf(fp,"\n");
//    }
//
//    fclose(fp);
//}
//int main()
//{
//    int a[10][10];
//    int n;
//    int var = 1;
//    int x = 0,y = 0;
//
//    scanf("%d",&n);
//    var = 1;
//
//    memset(a,0,sizeof(a));
//    a[x][y] = 1;
//    while(var<n*n)
//    {
//        while(y+1<=n-1 && !a[x][y+1]) a[x][++y] = ++var;
//        while(x+1<=n-1 && !a[x+1][y]) a[++x][y] = ++var;
//        while(y-1>=0 && !a[x][y-1]) a[x][--y] = ++var;
//        while(x-1>=0 && !a[x-1][y]) a[--x][y] = ++var;
//    }
//    save(a,n);
//	return 0;
//}


