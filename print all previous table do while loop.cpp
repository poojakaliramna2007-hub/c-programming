#include<stdio.h>
int main()
   {
   	int a,b,no;
   	printf("enter your number");
   	scanf("%d",&no);
   	a=1;
   	do
   	  {
   	  	b=a;
   	  	do
   	  	{
   	  		printf("\t%d",b);
   	  		b+=a;
			 }
		while(b<=a*10);	 
		printf("\n");
		a++;	 
		 }
		while(a<=no); 
		 return 0;
   }
