#include<stdio.h>
int main()
   {
   	int day,time;
   	printf("welcome ");
   	printf("\nenter 1 for monday\nenter 2 for tuesday\nenter 3 for wednesday\nenter 4 thursday\nenter 5 for friday\nenter 6 for saturday\nenter 7 for sunday\n");
   	scanf("%d",&day);
   	switch(day)
   	   {
   	   	case 1:  	
   	   		printf("\nenter 1 for morning\nenter 2 for evening\n");
   	   		scanf("%d",&time);
   	   		switch(time)
   	   		    {
   	   		    	case 1:
   	   		    		printf("monday morning");
   	   		    		break;
   	   		    	case 2:
						  printf("monday evening");
						  break;
					default :
						printf("invalid choice");	  	
					  }
					  break;
		case 2:  	
   	   		printf("\nenter 1 for morning\nenter 2 for evening\n");
   	   		scanf("%d",&time);
   	   		switch(time)
   	   		    {
   	   		    	case 1:
   	   		    		printf("tuesday morning");
   	   		    		break;
   	   		    	case 2:
						  printf("tuesday evening");
						  break;
					default :
						printf("invalid choice");	  	
					  }
					  break;
			case 3:  	
   	   		printf("\nenter 1 for morning\nenter 2 for evening\n");
   	   		scanf("%d",&time);
   	   		switch(time)
   	   		    {
   	   		    	case 1:
   	   		    		printf("wednesday morning");
   	   		    		break;
   	   		    	case 2:
						  printf("wednesday evening");
						  break;
					default :
						printf("invalid choice");	  	
					  }
					  break;
			case 4:  	
   	   		printf("\nenter 1 for morning\nenter 2 for evening\n");
   	   		scanf("%d",&time);
   	   		switch(time)
   	   		    {
   	   		    	case 1:
   	   		    		printf("thursday morning");
   	   		    		break;
   	   		    	case 2:
						  printf("thursday evening");
						  break;
					default :
						printf("invalid choice");	  	
					  }
					  break;
			case 5:  	
   	   		printf("\nenter 1 for morning\nenter 2 for evening\n");
   	   		scanf("%d",&time);
   	   		switch(time)
   	   		    {
   	   		    	case 1:
   	   		    		printf("friday morning");
   	   		    		break;
   	   		    	case 2:
						  printf("friday evening");
						  break;
					default :
						printf("invalid choice");	  	
					  }
					  break;
			case 6:  	
   	   		printf("\nenter 1 for morning\nenter 2 for evening\n");
   	   		scanf("%d",&time);
   	   		switch(time)
   	   		    {
   	   		    	case 1:
   	   		    		printf("saturday morning");
   	   		    		break;
   	   		    	case 2:
						  printf("saturday evening");
						  break;
					default :
						printf("invalid choice");	  	
					  }
					  break;
			case 7:  	
   	   		printf("\nenter 1 for morning\nenter 2 for evening\n");
   	   		scanf("%d",&time);
   	   		switch(time)
   	   		    {
   	   		    	case 1:
   	   		    		printf("sunday morning");
   	   		    		break;
   	   		    	case 2:
						  printf("sunday evening");
						  break;
					default :
						printf("invalid choice");	  	
					  }
					  break;		  		  		  		  		  		  		  			  
			default :
				printf("no result");		  
			break;	  
   	   		
		  }
	return 0;	  
   }
