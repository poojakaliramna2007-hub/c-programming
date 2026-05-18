#include<stdio.h>
int main()
  {
  	int a;
  	for(a=1;a<=10;a++)
  	  {
  	  	printf("%d",a);
  	  	if(a%2==0)
  	  	printf("even\n");
  	  	else
  	  	printf("odd ");
		}
	return 0;	
  }
