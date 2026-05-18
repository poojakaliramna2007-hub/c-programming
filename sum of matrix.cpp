#include<stdio.h>
int main()
   {
   	int ar[3][3],i,j,no[3][3],ch[3][3];
   	printf("enter element of first matrix\n");
   	for(i=0;i<=2;i++)
   	   {
   	   	for(j=0;j<=2;j++)
   	   	   {
   	   	   	printf("enter your number");
   	   	   	scanf("%d",&ar[i][j]);
				 }
		  }
	printf("first matrix\n");	  
	for(i=0;i<=2;i++)
   	   {
   	   	for(j=0;j<=2;j++)
   	   	   {
			printf("%d ",ar[i][j]);
		}
		printf("\n");}
	printf("enter element of second matrix\n");	
	for(j=0;j<=2;j++)
   	   {
   	   	for(i=0;i<=2;i++)
   	   	   {
   	   	   	printf("enter your number");
   	   	   	scanf("%d",&no[i][j]);
				 }
		  }
	printf("second matrix\n");	  
	for(j=0;j<=2;j++)
   	   {
   	   	for(i=0;i<=2;i++)
   	   	   {
			printf("%d ",no[i][j]);
		}
		printf("\n");}
	printf("third matrix\n");
	for(i=0;i<=2;i++)
   	   {
   	   	for(j=0;j<=2;j++)
   	   	   {
			ch[i][j]=ar[i][j]+no[i][j];
			printf("%d ",ch[i][j]);
		}
	printf("\n");}	
	return 0;		
   }
