#include<stdio.h>
int main()                     //program to create computer courses
   {
   	int a,b,c,d;
   	printf("welcome to j2k computer");
   	printf("\nenter 1 for advanced basic\nenter 2 for alc\nenter 3 for programming\n");
   	scanf("%d",&a);
   	switch(a)
   	   {
   	   	case 1:
   	   		printf("welcome to advanced basic");
   	   		printf("\nenter 1 for ms office\nenter 2 for networking\nenter 3 for window operator\n");
   	   		scanf("%d",&b);
   	   		switch(b)
   	   		   {
   	   		   	case 1:
   	   		   		printf("ms office");
   	   		   		break;
   	   		   	case 2:
					printf("networking");
					break;
				case 3:
					printf("window operator");
					break;
				default :
					printf("no result");						 	
					 }
			break;
		case 2:
			printf("welcome to alc");
			printf("\nenter 1 for basic alc\nenter 2 for advanced alc\nenter 3 for advance tally\n");
			scanf("%d",&c);
			switch(c)
			   {
			   	case 1:
			   		printf("basic alc");
			   		break;
			   	case 2:
				   printf("advanced alc");
				   break;
				case 3:
					printf("advanced tally");
					break;
				default :
					printf("no result");	   	
			   }
			break;
		case 3:
			printf("welcome to programming");
			printf("\nenter 1 for c\nenter 2 for c++\nenter 3 for java\n");		 
   	   		scanf("%d",&d);
   	   		switch(d)
   	   		  {
   	   		  	case 1:
   	   		  		printf("c");
   	   		  		break;
   	   		  	case 2:
					printf("c++");
					break;
				case 3:
					printf("java");
					break;
				default :
					printf("no result");				
					}
			break;
	return 0;				
		  }
		  
   }
