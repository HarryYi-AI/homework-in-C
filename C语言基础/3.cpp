//#include<stdio.h>
//#include<math.h> 
//int main() 
//{ 
//	long int i,x,y,z; 
//	for (i=1;i<100000;i++) 
//		{ 	
//			x=sqrt(i+100); /*xΪ����100�󿪷���Ľ��*/ 
//			y=sqrt(i+268); /*yΪ�ټ���168�󿪷���Ľ��*/ 
//			if(x*x==i+100&&y*y==i+268)/*���һ������ƽ������ƽ�����ڸ�������˵����������ȫƽ����*/ 
//				printf("\n%ld\n",i); 
//		}
//	return 0;
//} 
//
//#include<stdio.h> 
//int main() 
//{ 
//	int i,j; 
//	for(i=0;i<8;i++) 
//	{ 
//		for(j=0;j<8;j++) 
//			if((i+j)%2==0) 
//				printf("%c%c",125,125); 
//			else 
//				printf(" "); 
//		printf("\n"); 
//	}
//} 
#include<stdio.h> 
int main() 
{ 
	int i,j; 
	printf("\1\1\n");/*�������Ц��*/ 
	for(i=1;i<11;i++) 
	{ 
		for(j=1;j<=i;j++) 
			printf("%c%c",219,219); 
		printf("\n"); 
	} 
}

