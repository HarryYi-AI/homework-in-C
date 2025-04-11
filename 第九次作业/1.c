#include <stdio.h>
 
int main()
{
    int n,m,i,j,l,a[500][500],b[500][500],t;   
    FILE*in,*out;
 
    if((in=fopen("data.txt","r"))==NULL)   
        return -1;
    if((out=fopen("result.txt","w"))==NULL)
        return -1;
 
    fscanf(in,"%d%d",&n,&m);                 
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            fscanf(in,"%d",&a[i][j]);
 
                 
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            fscanf(in,"%d",&b[i][j]);
 
    fprintf(out,"%d %d ",n,m);
    for(i=0;i<n;i++)                           //计算乘法并输出到文件
        for(j=0;j<m;j++)
        {
            t = 0;
            t += a[i][j]+b[i][j];
            fprintf(out,"%d ",t);
        }
 
    fclose(in);
    fclose(out);
 
    return 0;
}
