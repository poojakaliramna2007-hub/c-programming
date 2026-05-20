#include<stdio.h>
#include<string.h>
int main()
    {
    	char ar[10];
    	int count=0,i;
    	printf("enter your string");
    	gets(ar);
    	for(i=0;i<=strlen(ar);i++)
    	   {
    	   	if(ar[i]=='a'||ar[i]=='e'||ar[i]=='i'||ar[i]=='o'||ar[i]=='u'||ar[i]=='A'||ar[i]=='E'||ar[i]=='I'||ar[i]=='O'||ar[i]=='U')
    	   	count=count+1;
		   }
		   printf("%d",count);
		   return 0;
	}
