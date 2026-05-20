#include<stdio.h>
int main()                   //sorting in decending order
   {
   	int ar[5],i,j,x;
   	for(i=0;i<=4;i++)
   	   {
   	   	printf("enter your number");
   	   	scanf("%d",&ar[i]);
		  }
	for(i=0;i<=4;i++)
	  {
	  	for(j=i+1;j<=4;j++)
	  	   {
	  	   	if(ar[i]<=ar[j])
	  	   	{
			x=ar[i];
	  	   	ar[i]=ar[j];
	  	   	ar[j]=x;}
			 }
			}	  
	for(i=0;i<=4;i++)
	   {
	   	printf("%d ",ar[i]);
			 }	  
	return 0;		 
   }
