#include<stdio.h>
int main()
  {
  	int a,b,c;
  	printf("enter a");
  	scanf("%d",&a);
  	printf("enter b");
  	scanf("%d",&b);
  	printf("enter c");
  	scanf("%d",&c);
  	a=a+b;
  	b=a-b;
  	a=a-b;
  	b=b+c;
  	c=b-c;
  	b=b-c;
  	printf("\na=%d",a);
  	printf("\nb=%d",b);
  	printf("\nb=%d",c);
  	return 0;
  }
