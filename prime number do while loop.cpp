#include<process.h>
#include<stdio.h>
int main()
    {
    	int a=2,no;
    	printf("enter your number");
    	scanf("%d",&no);
    	do
    	   {
    	   	if(no%a==0)
    	   	 {
				printf("composite number");
    	   	 	exit(0);}
    	   	 	a++;
		   }
		   while(a<no);
		   printf("prime");
		   return 0;
	}
