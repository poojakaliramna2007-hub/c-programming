#include<stdio.h>
#include<string.h>         //convert string to lowercase
int main()
    {
    	char ar[10];     
    	printf("enter your string");
    	gets(ar);
    	printf("%s",strlwr(ar));
    	return 0;
	}
