#include<stdio.h>
int main()
  {
  	int year;
  	printf("enter your year");
  	scanf("%d",&year);
  	if((year%4==0 && year%10!=0) || year%400==0)
  	printf("it is leap year");
  	else
  	printf("no its is not a year");
  	return 0;
  }
