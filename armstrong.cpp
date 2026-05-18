#include<stdio.h>
int main()
   {
   	int a,no,digit,q=1,c=0;
   	printf("enter your number");
   	scanf("%d",&no);
   	a=no;
   	while( q!= 0)
   	   {
   	   	q=no/10;
   	   	digit=no%10;
   	   	no=q;
   	   	c=c+digit*digit*digit;
		  }	  
	if(c==a)
	printf("\narmstrong");
	else
	printf("\nnot armstrong");
	return 0;	  
   }
