#include<stdio.h>
int main()
   {
   	int ar[3][3],ch[3][3],i,j,m,no[3][3];
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
		for(m=0;m<=2;m++)
    	{
    	   for(j=0;j<=2;j++)
    	    {
    	    	printf("enter your number");
    	    	scanf("%d",&ch[m][j]);
			}
		}
		printf("\nsecond matrix\n");
		for(m=0;m<=2;m++)
		   {
		   	for(j=0;j<=2;j++)
		   	 {
		   		printf("%d ",ch[m][j]);
			 }
			printf("\n");	
		   }  
		printf("\nmultipliction of matrix\n");   
		for(i=0;i<=2;i++)
		   {
		   	for(m=0;m<=2;m++)
		   	   {
		   	   	no[i][m]=0;
		   	   	for(j=0;j<=2;j++)
		   	   	   	no[i][m]=no[i][m]+ar[i][j]*ch[j][m];
		   	   	   	printf("%d ",no[i][m]);
				}	
			printf("\n");			  
		   }
		   return 0;
   }
