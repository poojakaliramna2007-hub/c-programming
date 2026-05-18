#include<stdio.h>
int main()
   {
   	int a,no,c=0;
   	printf("enter number");
   	scanf("%d",&no);
   	for(a=1;a<=no;a++)
   	   {
   	   	c=c+a;
		  }
		printf("sum=%d",c);
		return 0;  
   }
