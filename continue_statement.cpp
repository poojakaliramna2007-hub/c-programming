#include<stdio.h>
int main()
   {
   	int a,b;
   	for(a=1;a<=2;a++)
   	   {
   	   	for(b=1;b<=2;b++)
   	   	   {
   	   	   	if(a==b)
   	   	   	continue;
   	   	   	printf("%d %d\n",a,b);
				 }			 
		  }
	return 0;	  
   }
