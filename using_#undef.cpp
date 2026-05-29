#include<stdio.h>
#define start int main(){
#define A 10
#undef A
#define end return 0;}
start
#ifdef A
printf("a is defined");
#else
printf("a is not defined");
#endif
end	
	
