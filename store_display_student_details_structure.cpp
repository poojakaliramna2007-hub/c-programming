#include<stdio.h>
struct abc
    {
    	int rno,marks;
    	char name[10];
	}
obj;
int main()
    {
    	printf("enter your roll number");
    	scanf("%d",&obj.rno);
    	printf("enter your name");
    	scanf("%s",obj.name);
    	printf("enter your marks");
    	scanf("%d",&obj.marks);
    	printf("\nstudent details\n");
    	printf("\nroll no = %d",obj.rno);
    	printf("\nname = %s",obj.name);
    	printf("\nmarks = %d",obj.marks);
    	return 0;
		}	
	
