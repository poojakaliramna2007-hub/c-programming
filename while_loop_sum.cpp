#include<stdio.h>
int main()                    //program to print sum many times as we needed
   {
   	char ch='y';
   	int a,b,sum;
   	while(ch=='y')
   	  {
   	  	printf("enter 1st number");
   	  	scanf("%d",&a);
   	  	printf("enter 2nd number");
   	  	scanf("%d",&b);
   	  	sum=a+b;
   	  	printf("%d",sum);
   	  	printf("\ndo you want to continue(y/n)=");
		scanf(" %c",&ch); 
		 }
	return 0;	 
   }
