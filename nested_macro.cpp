#include<stdio.h>
#define start int main(){
#define sqr(n) n*n
#define cube(n) sqr(n)*n
#define end return 0;}
start
int no;
printf("enter your number");
scanf("%d",&no);
printf("square=%d",sqr(no));
printf("cube=%d",cube(no));
end


