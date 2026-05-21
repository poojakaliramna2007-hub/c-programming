#include<stdio.h>
int main()
   {
   	int no,a=0,b=1,i,n;
   	printf("enter your number");
   	scanf("%d",&no);
   	for(i=1;i<=no;i++)
   	  {
   	  	n=a+b;
   	  	printf("%d+",a);
   	  	printf("%d=",b);
   	  	a=b;
   	  	printf("%d\n",n);
   	  	b=n;
		 }
	return 0;	 
   }
