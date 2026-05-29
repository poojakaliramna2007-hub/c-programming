#include<stdio.h>
#include "fun1.c"
#include "fun2.c"
#include "fun3.c"
#include "fun4.c"
int main()
  {
  	int a,b;
  	printf("enter 1st number");
  	scanf("%d",&a);
  	printf("enter 2nd number");
  	scanf("%d",&b);
  	printf("sum=%d",sum(a,b));
  	printf("subtract=%d",subtract(a,b));
  	printf("multiply=%d",multiply(a,b));
  	printf("divide=%d",divide(a,b));
  	return 0;
  }
