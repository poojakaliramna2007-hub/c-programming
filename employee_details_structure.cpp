#include<stdio.h>
struct abc
   {
   	int id;
   	float sal;
   	char name[10];
   }
obj1;
int main()
    {
    	printf("enter your ID");
    	scanf("%d",&obj1.id);
    	printf("enter your salary");
    	scanf("%f",&obj1.sal);
    	printf("enter your name");
    	scanf("%s",obj1.name);
    	printf("\nstudent detail\n");
    	printf("id=%d",obj1.id);
    	printf("\nsalary=%f",obj1.sal);
    	printf("\nname=%s",obj1.name);
    	return 0;
	   }   
