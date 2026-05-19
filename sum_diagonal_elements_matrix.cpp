#include<stdio.h>
int main()               //program for the sum of the main diagonal element
   {
   	int ar[3][3],i,j,sum=0;
   	for(i=0;i<=2;i++)
    	{
    	   for(j=0;j<=2;j++)
    	    {
    	    	printf("enter your number");
    	    	scanf("%d",&ar[i][j]);
			}
		}
	for(i=0;i<=2;i++)
	  {
	  	for(j=0;j<=2;j++)
	  	   {
	  	   	if(i==j)
	  	   	sum=sum+ar[i][j];
			 }
		  }	
	printf("sum of diagoanl element=%d",sum);
	return 0;	  
   }
