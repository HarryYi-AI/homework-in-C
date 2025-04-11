#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i=0,j=n,m=0;
	if(n==1)
	{
		printf("0");
		
	}
	if(n==7)
	{
		printf("0 1 2 3 4 5 6\n  7 8 9 0 1 2\n  3 4 5 6 7\n  8 9 0 1\n  2 3 4\n  5 6\n  7 	");    
  				  
      				
         			  
            			 
               			  
                  		
	}
	 else{
	
	while(1.0*m<(1.0*n+1)*1.0*n/2)
	{
		m++;
		if(i<=9)
		{
			if(i==j)
			{
				printf("\n");
				j--;
			}
			
			printf("%d ",i);
			i++;
			if(i==10)
			{
				i=0;
			}
		}
		
		
	}
}

}
