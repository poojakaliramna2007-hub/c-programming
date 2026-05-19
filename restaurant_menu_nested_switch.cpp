#include<stdio.h>
int main()                          //nested switch program to create menu
  {
  	int a,b,c,d,e,f,g,h,i,j;
  	printf("welcome to j2k restaurant");
  	printf("\nenter 1 for breakfast\nenter 2 for lunch\nenter 3 for dinner\n");
  	scanf("%d",&a);
  	switch(a)
  	   {
  	   	case 1:
  	   		printf("welcome to breakfast");
  	   		printf("\nenter 1 for paratha\nenter 2 for shake\n");
  	   		scanf("%d",&b);
  	   		switch(b)
  	   	  		{
  	   	  		case 1:
  	   	  			printf("welcome to paratha");
  	   	  			printf("\nenter 1 for aloo paratha\nenter 2 for paneer paratha\n");
  	   	  			scanf("%d",&c);
  	   	  			switch(c)
  	   	  			   {
  	   	  			   	case 1:
  	   	  			   		printf("aloo paratha");
  	   	  			   		break;
  	   	  			   	case 2:
							printf("paneer paratha");
							break;
						default :
							printf("no result");		  	
							  }
					break;
				case 2:
					printf("welcome to shake");
					printf("\nenter 1 for mango shake\nenter 2 for banana shake\n");
					scanf("%d",&d);
					switch(d)
					  {
					  	case 1:
					  		printf("mango shake");
					  		break;
					  	case 2:
					  		printf("banana shake");
					  		break;
						 default :
						 	printf("no result"); 	
					  }
					break;
				default :
					printf("not available");	
					}
					
			break;			  
							
				case 2:
					printf("welcome to lunch");
					printf("\nenter 1 for burgur\nenter 2 for ice cream\n ");
					scanf("%d",&e);
					switch(e)
					   {
					   	case 1:
					   		printf("welcome to burgur");
					   		printf("\nenter 1 for veg burgur\nenter 2 for cheese burgur\n");
					   		scanf("%d",&f);
					   		switch(f)
					   			{
					   				case 1:
					   					printf("veg burgur");
					   					break;
					   				case 2:
									   printf("cheese burgur");
									   break;
									 default :
									 	printf("no result");  	
								   }
							break;	
						case 2:
							printf("welcome to ice cream");
							printf("\nenter 1 for mango ice cream\nenter 2 for orange icecream\n");
							scanf("%d",&g);
							switch(g)
							    {
							    	case 1:
							    		printf("mango icecream");
							    		break;
							    	case 2:
										printf("orange icecream");
										break;
									default :
										printf("no result");		
											   }
							break;
							default :
								printf("no result");
											   
									 }
					break;				 
				case 3:
					printf("welcome to dinner");
					printf("\nenter 1 for dosa\nenter 2 for pizza\n");
					scanf("%d",&h);
					switch(h)
					   {
					   	case 1:
					   		printf("welcome to dosa");
					   		printf("\nenter 1 for plain dosa\nenter 2 for masala dosa\n");
					   		scanf("%d",&i);
					   		switch(i)
					   		   {
					   		   	case 1:
					   		   		printf("plain dosa");
					   		   		break;
					   		   	case 2:
									  printf("masala dosa");
									  break;
								default :
									printf("no result");	  	
								  }
							break;
						case 2:
							printf("welcome to pizza");
							printf("\nenter 1 for makhini pizza\nenter 2 for spicy cheese pizza\n");
							scanf("%d",&j);
							switch(j)
							    {
							    	case 1:
										printf("makhini pizza");
										break;
									case 2:
										printf("spicy cheese pizza");
										break;
									default :
										printf("no result");			
										  }	
								break;
						default :
							printf("mo result");				  	  
													  }
				break;
		default :
			printf("to result");
				
													  				 			  
			   }
			   
		 }
  
