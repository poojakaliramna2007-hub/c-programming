#include<stdio.h>
int main()
   {
   	int day,time;
   	printf("welcome ");
   	printf("\nenter 1 for monday\nenter 2 for tuesday\nenter 3 for wednesday\nenter 4 thursday\nenter 5 for friday\nenter 6 for saturday\nenter 7 for sunday\n");
   	scanf("%d",&day);
   	printf("\nenter 1 for morning\nenter 2 for evening\n");
   	scanf("%d",&time);
   	switch(day)
   	   {
   	   	case 1:
			  printf("monday");
			  break;
		case 2:
			printf("tuesday");
			break;	    
		case 3:
			  printf("wednesday");
			  break;
		case 4:
			printf("thurday");
			break;
		case 5:
			  printf("friday");
			  break;
		case 6:
			printf("saturday");
			break;
		case 7:
			  printf("sunday");
			  break;
		default :
			printf("invalid choice");
		}
		   switch(time)
   	   		    {
   	   		    	case 1:
   	   		    		printf("morning");
   	   		    		break;
   	   		    	case 2:
						  printf("evening");
						  break;
					default :
						printf("invalid choice");	  	
					  }
					
					  return 0;
				}
