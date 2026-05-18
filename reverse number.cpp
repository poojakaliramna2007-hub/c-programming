#include<stdio.h>
int main()
  {
  	int a,b,c,d;
  	char ch='y';
  	while(ch=='y')
  	  {
  	  	printf("enter your digit");
  	  	scanf("%d%d%d", &a, &b, &c);
  	  	d=a;
  	  	a=c;
  	  	c=d;
  	  	printf("%d%d%d",a,b,c);
  	  	printf("\ndo you want to continue");
  	  	scanf(" %c",&ch);
		}
		return 0;
  }
