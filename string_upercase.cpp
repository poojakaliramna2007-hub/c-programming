#include<stdio.h>
#include<string.h>         //convert string to uppercase
int main()
    {
    	char ar[10];     
    	printf("enter your string");
    	gets(ar);
    	printf("%s",strupr(ar));
    	return 0;
	}
