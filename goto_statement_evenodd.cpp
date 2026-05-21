#include<stdio.h>
#include<process.h>
int main()
    {
    	int no,i,even,odd;
    	printf("enter your number");
    	scanf("%d",&no);
    	if(no%2==0)
    	goto even;
    	else
    	goto odd;
	even:
	printf("number is even");
	exit(0);
	odd:
	printf("number is odd");
	return 0;	   
	}
