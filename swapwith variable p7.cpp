#include<stdio.h>
int main()
    {
    int a,b,c,d,e,f;
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
    f=a;
    a=b;
    b=c;
    c=d;
    d=e;
    e=f;
    printf("\na=%d",a);
    printf("\nb=%d",b);
    printf("\nc=%d",c);
    printf("\nd=%d",d);
    printf("\ne=%d",e);
    return 0;
	}
