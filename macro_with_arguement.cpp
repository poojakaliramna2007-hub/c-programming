#include<stdio.h>
#define start int main(){
#define sqr(n) n*n
#define end return 0;}
int area( int r);
int area(int r)
  {
  	int a,pi=22/7;
  	a=pi*r*r;
  	return a;
  }
start
int no;
printf("enter your number");
scanf("%d",&no);
printf("square=%d",sqr(no));
printf("\narea of circle=%d",area(no));
end  
  
