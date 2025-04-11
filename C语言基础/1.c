#include <stdio.h>

typedef struct tag_Time_T 
 {
   int h,m,s; 
    
  } Time_T;
  
  Time_T time_pass(Time_T start,int passed_sec);
  
  main()
  {
   Time_T t;
   int passed_sec;
   
   scanf("%d:%d:%d",&t.h,&t.m,&t.s);
   scanf("%d",&passed_sec);
   
   t= time_pass(t,passed_sec);
   printf("%02d:%02d:%02d",t.h,t.m,t.s);
  }
  
Time_T time_pass(Time_T start,int passed_sec)
  {
   long t;
   
   t=start.h*3600+start.m*60+start.s;
   t+=passed_sec;
   
   start.h=(t/3600)%24;
   start.m=( t % 3600)/60;
   start.s=t%60;
 
 return start;
  }
