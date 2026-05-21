#include<stdio.h>
int main()
   {
   	int no;
   	printf("enter your number");
   	scanf("%d",&no);
   	if(no%2==0 && no%3==0 && no%5==0)
   	printf("number is divisible by 2,3,5");
   	else
   	if(no%2==0 && no%3==0)
   	printf("\nnumber is divisible by 2,3");
   	else
   	if(no%3==0 && no%5==0)
   	printf("number is divisible by 3,5");
   	else
   	if(no%5==0 && no%2==0)
   	printf("number is divisible by 5,2");
   	else
   	if(no%2==0)
   	printf("number is divisible by 2");
   	else
   	if(no%3==0)
   	printf("number is divisible by 3");
   	else
   	if(no%5==0)
   	printf("number is divisible by 5");
   	else
   	printf("number is not divisible by 2,3,5");
   	return 0;
   }
