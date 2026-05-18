#include<stdio.h>
int main()
   {
   	int no,a,digit,q=1,rev=0;
   	printf("enter a number");
   	scanf("%d",&no);
   	a=no;
   	while( q !=0)
   	{
   		q=no/10;
   		digit=no%10;
   		no=q;
   		printf("%d",digit);
   		rev=rev*10+digit;
	   }
	if(rev==a)
	printf("\npalindrone");
	else
	printf("\nnot palindrone");
	return 0;   
   }
