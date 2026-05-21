#include<stdio.h>
void sum(int *x,int *y);
void sum(int *x, int *y)
   {
   	*x=*x+10;
   	*y=*y+20;
   	printf("%d %d\n",*x,*y);
   }
int main()
    {
    	int a=5,b=10;
    	printf("%d %d\n",a,b);
    	sum(&a,&b);
    	printf("%d %d",a,b);
    	return 0;
	   }   
