#include<process.h>
#include<stdio.h>
int main()
  {
  	int a,b,no;
  	printf("enter your number");
  	scanf("%d",&no);
  	a=2;
  	do
  	   {
  	   	if(no%2==0)
  	   	  {
  	   	  	printf("composite");
  	   	  	exit(0);
			   }
			a++;   }
		while(a<no);	
		printf("prime");
		return 0;	   
		 }
  
