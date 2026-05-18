#include<stdio.h>
int main()
   {
   	int a;
   	char ch;
   	printf("choose character type");
   	printf("\nenter 1 for alphabet\nenter 2 for digit\nenter 3 for symbol\n");
   	scanf("%d",&a);
   	switch(a)
   	   {
   	   	case 1:
   	   		printf("type is character");
   	   		printf("\nenter a character");
   	   		scanf(" %c",&ch); /*%c read even newline(enter key) 
   	   								as input [add space before %c]*/  	   		
   	   		switch(ch)
   	   		   {
   	   		   	case 'a':
   	   		   	case 'e':
   	   		   	case 'i':
   	   		   	case 'o':
				case 'u':
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':	
					printf("\ncharacter is vowel");
					break;
				default :
					printf("\ncharacter is consonent");}
			break;		
		case 2:
			printf("\ntype is digit");
			break;
		case 3:
			printf("\ntype is symbol");
		default :
			printf("\nno result");
		return 0;		
										 	
					 
		  }
   }
