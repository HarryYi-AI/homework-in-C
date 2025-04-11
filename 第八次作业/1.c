#include<stdio.h>

struct Time_T
{
	int hour ;
	int minute;
	int second;
 } ;

struct Time_T time_pass(struct Time_T time0, int passed_sec);
int main ()
{
	struct Time_T time0,*add;
	time0.hour=0;
	time0.minute=0;
	time0.second=0;
	int n;
	scanf("%d:%d:%d",&time0.hour,&time0.minute,&time0.second);
	scanf("%d",&n);
	time0=time_pass(time0,n);
	printf("%02d:%02d:%02d",time0.hour,time0.minute,time0.second);
	return 0; 
}
struct Time_T time_pass(struct Time_T time0, int passed_sec)
{
	time0.second=time0.second+passed_sec;
	while (time0.second>=60)
	{
		time0.second=time0.second-60;
		time0.minute++;
	}
	while (time0.minute>=60)
	{
		time0.minute-=60;
		time0.hour++;
	}
	while (time0.hour>=24)
	{
		time0.hour-=24;
	}
	return time0;
}

//#include <stdio.h>
//
//int main()
//{
//    int a,b,c,n;
//    scanf("%d:%d:%d%d",&a,&b,&c,&n);
//    c += n;
//    while(c >= 60)
//    {
//        b++;
//        c -= 60;
//    }
//    while(b >= 60)
//    {
//        a++;
//        b -= 60;
//    }
//    while(a >= 24)
//    {
//    	a = a - 24;
//	}
//    printf("%02d:%02d:%02d\n",a,b,c);
//    return 0;
//}

