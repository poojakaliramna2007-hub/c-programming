#include<stdio.h>
#include<string.h>             //program for palindrome string
int main()
   {
   	char ar[10],rev[10],i;
   	printf("enter your string");
   	gets(ar);
    strcpy(rev,ar);
    strrev(rev);	  
   	if(strcmp(ar,rev)==0)
   	printf("palindrome string");
   	else
   	printf("not palindome ");
   	return 0;
   }
