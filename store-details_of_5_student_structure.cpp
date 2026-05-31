#include<stdio.h>
#include<string.h>
struct abc
  {
  	int rno,marks;
  	char name[30];
  }
obj[3];
int main()
    {
    	int i;
    	for(i=0;i<=2;i++)
    	{
    		printf("\nenter your name");
	    	fgets(obj[i].name,sizeof(obj[i].name),stdin);
	    	obj[i].name[strcspn(obj[i].name,"\n")]='\0';
			printf("\nenter your roll number");
    		scanf("%d",&obj[i].rno);
	    	printf("enter your marks");
	    	scanf("%d",&obj[i].marks);
	    	getchar();
		}
		for(i=0;i<=2;i++)
		   {
		   	printf("____________________");
		   	printf("\nstudent detail %d\n",i+1);
		   	printf("\nroll number=%d",obj[i].rno);
		   	printf("\nname=%s",obj[i].name);
		   	printf("\nmarks=%d",obj[i].marks);
		   	printf("\n____________________\n");
		   }
		 return 0;
		 }  
    	
	    
