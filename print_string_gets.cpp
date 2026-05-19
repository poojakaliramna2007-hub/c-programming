#include<stdio.h>
int main()          //program to print a string using gets() 
   {
   	char ar[10];
   	printf("enter your string");
   	gets(ar);    //gets() stores the full lines including spaces
   	printf("%s",ar);
   	return 0;	
   }
