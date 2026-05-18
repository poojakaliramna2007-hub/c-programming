#include<stdio.h>
int main()
   {
   	int ar[5],no,i;
   	for(i=0;i<=4;i++)
   	   {
   	   	printf("enter your number");
   	   	scanf("%d",&ar[i]);
		  }
	printf("enter number");
	scanf("%d",&no);
	for(i=0;i<=4;i++)
	   {
	   	if(ar[i]==no)
	   	 	printf("number is found at index=%d ",i);
			 }	 
	return 0;		  
   }
