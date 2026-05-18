#include<stdio.h>
int main()
   {
   	int a,b,no;
   	printf("enter your number");
   	scanf("%d",&no);
   	for(a=1;a<=no;a++)
   	  {
   	  	for(b=a;b<=a*10;b+=a)
   	  	{
   	  		printf("\t%d",b);
			 }
		printf("\n");	 
		 }
		 return 0;
   }
