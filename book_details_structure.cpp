#include<stdio.h>
struct abc
   {
   	int price;
   	char bookname[10],authorname[20];
   }
obj1;
int main()
    {
    	printf("enter your price");
    	scanf("%d",&obj1.price);
    	printf("enter your book name");
    	scanf("%s",obj1.bookname);
    	printf("enter your author name");
    	scanf("%s",obj1.authorname);
    	printf("\nstudent detail\n");
    	printf("price=%d",obj1.price);
    	printf("\nbook name=%s",obj1.bookname);
    	printf("\nauthor name=%s",obj1.authorname);
    	return 0;
	   }   
