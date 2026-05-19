#include<stdio.h>
int main()                      //program for the addition of two matrix
    {
    	int ar[3][3],i,j,ch[3][3],no[3][3];
    	printf("enter element of first matrix\n");
    	for(i=0;i<=2;i++)
    	{
    	   for(j=0;j<=2;j++)
    	    {
    	    	printf("enter your number");
    	    	scanf("%d",&ar[i][j]);
			}
		}
		printf("\nfirst matrix\n");
		for(i=0;i<=2;i++)
		   {
		   	for(j=0;j<=2;j++)
		   	 {
		   		printf("%d ",ar[i][j]);
			 }
			printf("\n");	
		   }
		printf("enter element of second matrix\n");   
		for(i=0;i<=2;i++)
    	{
    	   for(j=0;j<=2;j++)
    	    {
    	    	printf("enter your number");
    	    	scanf("%d",&ch[i][j]);
			}
		}
		printf("\nsecond matrix\n");
		for(i=0;i<=2;i++)
		   {
		   	for(j=0;j<=2;j++)
		   	 {
		   		printf("%d ",ch[i][j]);
			 }
			printf("\n");	
		   }  
		printf("third matrix\n"); 
		printf("sum of first and second matrix\n");
		for(i=0;i<=2;i++)
		   {
		   	for(j=0;j<=2;j++)
		   	 {
			   	no[i][j]=ar[i][j]+ch[i][j];
				   printf("%d ",no[i][j]); 	
				}
			printf("\n");	
			 }  
		return 0;
	}
