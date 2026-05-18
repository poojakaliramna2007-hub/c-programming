#include<stdio.h>
int main()
  { 
  int b,no,z;
  printf("enter your number");
  scanf("%d",&no);
  int a=2;
  while(a<no)
    {
    	if(no%a==0)
    	z=10;
    	break;
		a++;}
    	if(z==10)
    	printf("composite");
    	else
    	printf("prime");
    	return 0;
	}
  
