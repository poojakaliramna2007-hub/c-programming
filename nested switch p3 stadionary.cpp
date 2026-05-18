#include<stdio.h>
int main()
   {
   	int a,b,c,d,e,f;
   	printf("welcome to stadionary");
   	printf("\nenter 1 for pen\nenter 2 for pencil\n");
   	scanf("%d",&a);
   	switch(a)
   	  {
   	  	case 1:
   	  		printf("welcome to pen world");
   	  		printf("\nenter 1 for blue pen\nenter 2 for black pen\n");
   	  		scanf("%d",&b);
   	  		switch(b)
   	  		   {
   	  		   	case 1:
   	  		   		printf("welcome to blue pen");
   	  		   		printf("\nenter 1 for butterflow\nenter 2 for cottonball pen\n");
   	  		   		scanf("%d",&c);
   	  		   		switch(c)
   	  		   		   {
   	  		   		   	case 1:
   	  		   		   		printf("butterflow pen");
   	  		   		   		break;
   	  		   		   	case 2:
							printf("cotton ball pen");
							break;
						default :
							printf("not available");		   	
							   }
					break;
				case 2:
					printf("welcome to black pen");
					break;
				default :
					printf("noooo");	
					}
			break;		
		case 2:
			printf("welcome to pencil world");
			printf("\nenter 1 for light pencil\nenter 2 for dark pencil\n");
			scanf("%d",&d);
			switch(d)
			   {
			   	case 1:
			   		printf("welcome to light pencil");
			   		printf("\nenter 1 for natraj pencil\nenter 2 for doms pencil\n");
			   		scanf("%d",e);
			   		switch(e)
			   		   {
			   		   	case 1:
			   		   		printf("natraj pencil");
			   		   		break;
			   		   	case 2:
							  printf("doms pencil");
							  break;
						default :
							printf("no result");	  	
						  }
					break;	
				case 2:
					printf("welcome to dark pencil");
					printf("\nenter 1 for apsara pencil\nenter 2 for pladium\n");
					scanf("%d",&f);
					switch(f)
					   {
					   	case 1:
					   		printf("apsara pencil");
					   		break;
					   	case 2:
						   printf("pladium pencil");
						   break;
						default :
							printf("not available");   	
					   }
					break;   
			   
		default :
			printf("noo result");
		}
		break;		   
		default :
			printf("mo dd");	
						
		 }
		 
   }
