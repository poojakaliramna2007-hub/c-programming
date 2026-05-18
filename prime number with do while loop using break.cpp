#include<stdio.h>
int main()
  { 
  int a,b,no,z;
  printf("enter your number");
  scanf("%d",&no);
  a=2;
  do
    {
    	if(no%a==0)
    	z=10;
    	break;
		a++;}
		while(a<no);
    	if(z==10)
    	printf("composite");
    	else
    	printf("prime");
    	return 0;
	}
  
