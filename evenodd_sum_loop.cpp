#include<stdio.h>
int main()
  {
  	int i,even=0,odd=0;
  	for(i=1;i<=10;i++)
  	   {
  	    if(i%2==0)
  	     {
  	   	  printf("%d\n",i);
  	   	  even=even+i;
		 }
	    else
	   {
	   	  printf("%d\t",i);
	   	  odd=odd+i;
    	}
	}
	printf("____\t____");
	printf("\n%d\t%d",odd,even);
	printf("\n____\t____");
	return 0;		
  }
