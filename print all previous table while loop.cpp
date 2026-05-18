#include<stdio.h>
int main()
   {
   	int a,b,no;
   	printf("enter your number");
   	scanf("%d",&no);
   	a=1;
   	while(a<=no)
   	  {
   	  	b=a;
   	  	while(b<=a*10)
   	  	{
   	  		printf("\t%d",b);
   	  		b+=a;
			 }
		printf("\n");
		a++;	 
		 }
		 return 0;
   }
