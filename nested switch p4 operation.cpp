#include<stdio.h>
int main()
   {
   	int a,b,c,n,m,t;
   	printf("welcome to operations");
   	printf("\nenter 1 for arthmetic\nenter 2 for logical\n");
   	scanf("%d",&a);
   	switch(a)
   	   {
   	   	case 1:
   	   		printf("welcome to arthmetic");
   	   		printf("\nenter 1 for addition\nenter 2 for subtraction\n");
   	   		scanf("%d",&b);
   	   		switch(b)
   	   			{
				   	   	case 1:
				   	   		printf("welcome to addition");
				   	   		printf("\nenter 1 no.");
				   	   		scanf("%d",&n);
				   	   		printf("\nenter 2 no");
				   	   		scanf("%d",&m);
				   	   		printf("\nsum=%d",n+m);
				   	   		break;
				   	   	case 2:
							  printf("welcome to subtraction");
							  printf("\nenter 1 no.");
							  scanf("%d",&n);
							  printf("\nenter 2 no.");
							  scanf("%d",&m);
							  printf("\nsubtract=%d",n-m);
							  break;
						default :
							printf("no result");}
				break;
		case 2:
			printf("welcome to logical");
			break;
		default :	
			printf("nooo");	
		return 0;		  	
   	   		
   	   		
		  }
	} 
