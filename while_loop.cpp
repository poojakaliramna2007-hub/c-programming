#include<stdio.h>
int main()                     //program to print j2k many times as we needed
   {
   	char ch='y';
   	while(ch=='y')
   	   {
   	   	printf("\nj2k\n");
		printf("do you want to continue(y/n)=");
		scanf(" %c",&ch); 
		}
	return 0;
   }
