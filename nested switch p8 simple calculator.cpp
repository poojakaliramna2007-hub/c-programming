#include<stdio.h>
int main()
   {
   	int a,b,c,d;
   	printf("welcome to operations");
   	printf("\nenter 1 for arthmetic\nenter 2 for logiacl\n");
   	scanf("%d",&a);
   	switch(a)
   	   {
   	   	case 1:
   	   		printf("welcome to arthmetic");
   	   		printf("\nenter 1 for addition\nenter 2 for subtraction\n");
   	   		scanf("%d",&d);
   	   		switch(d)
   	   		  {
   	   		  	case 1:
   	   		  		printf("welcome to addition");
   	   				printf("\nenter 1 no");
   	   				scanf("%d",&b);
   	   				printf("\nenter 2 no");
   	   				scanf("%d",&c);
   	   				printf("sum=%d",c+b);
   	   				break;
   	   			case 2:
					  printf("welcome to subtraction");
					  printf("\nenter 1 no");
   	   					scanf("%d",&b);
   	   					printf("\nenter 2 no");
   	   					scanf("%d",&c);
   	   					printf("subtract=%d",b-c;
   	   					break;
				default :
					printf("invalid input");			  	}
   	   		break;
		case 2:
			printf("welcome to logical");
			break;
		default :
			printf("no result");			  			
   	   			
		  }
   }
