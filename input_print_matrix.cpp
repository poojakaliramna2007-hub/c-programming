#include<stdio.h>
int main()                      //program to input and print matrix
    {
    	int ar[3][3],i,j;
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
		   		printf("%d ",ar[i][j]);
			 }
			printf("\n");	
		   }
		return 0;
	}
