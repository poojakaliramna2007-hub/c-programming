#include<stdio.h>
int main()                      //program for goto statement
  {
  	int i,l1;
  	for(i=1;i<=10;i++)
  	   {
  	   	printf("%d ",i);
  	   	if(i==5)
  	   	goto l1;
		 }
	l1:
	printf("\nexit from loop");
	return 0;	 
  }
