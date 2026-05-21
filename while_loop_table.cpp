#include<stdio.h>
int main()                     //program to print tables many times as we needed
   {
   	char ch='y';
   	int no,i;
   	while(ch=='y')
   	   {
   	   	printf("enter your number");
   	   	scanf("%d",&no);
   	   	for(i=no;i<=no*10;i+=no)
   	   	   {
   	   	   	printf("%d ",i);
				 }
		printf("\ndo you want to continue(y/n)=");
		scanf(" %c",&ch); 
		}
	return 0;
   }
