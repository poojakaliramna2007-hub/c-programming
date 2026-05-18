#include<stdio.h>
int main()
  {
  	int a,b,c,d,e;
  	printf("enter a");
  	scanf("%d",&a);
  	printf("enter b");
  	scanf("%d",&b);
  	printf("enter c");
  	scanf("%d",&c);
  	printf("enter d");
  	scanf("%d",&d);
  	printf("enter e");
  	scanf("%d",&e);
  	a=a+b;
  	b=a-b;
  	a=a-b;
  	b=b+c;
  	c=b-c;
  	b=b-c;
  	c=c+d;
  	d=c-d;
  	c=c-d;
  	d=d+e;
  	e=d-e;
  	d=d-e;
  	printf("\na=%d",a);
  	printf("\nb=%d",b);
  	printf("\nb=%d",c);
  	printf("\nd=%d",d);
  	printf("\ne=%d",e);
  	return 0;
  }
