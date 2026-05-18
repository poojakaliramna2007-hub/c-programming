#include<stdio.h>
int main()
  { 
  int a,b,no,z;
  printf("enter your number");
  scanf("%d",&no);
  for(a=2;a<no;a++)
    {
    	if(no%a==0)
    	z=10;
    	break;}
    	if(z==10)
    	printf("composite");
    	else
    	printf("prime");
    	return 0;
	}
  
