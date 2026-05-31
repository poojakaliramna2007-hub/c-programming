#include<stdio.h>
struct abc
  {
  	int e,h,m,sci,sst,total,average;
  	char name[10][10];
  }
obj[3];
int main()
    {
    	int i;
    	for(i=0;i<=2;i++)
    	{
			printf("enter your name=");
			fflush(stdin);
    		gets(obj[i].name[i]);
    		printf("enter your english marks=");
	    	scanf("%d",&obj[i].e);
	    	printf("enter your hindi marks=");
	    	scanf("%d",&obj[i].h);
	    	printf("enter your maths marks=");
	    	scanf("%d",&obj[i].m);
	    	printf("enter your science marks=");
	    	scanf("%d",&obj[i].sci);
	    	printf("enter your sst marks=");
	    	scanf("%d",&obj[i].sst);
		}
		for(i=0;i<=2;i++)
		   {
		   	printf("____________________");
		   	printf("\nstudent detail %d\n",i+1);
		   	printf("\nname=%s",obj[i].name[i]);
		   	printf("\nenglish marks=%d",obj[i].e);
		   	printf("\nhindi marks=%d",obj[i].h);
		   	printf("\nmaths marks=%d",obj[i].m);
		   	printf("\nscience marks=%d",obj[i].sci);
		   	printf("\nsst marks=%d",obj[i].sst);
		   	obj[i].total=obj[i].e+obj[i].h+obj[i].m+obj[i].sci+obj[i].sst;
		   	printf("\ntotal=%d",obj[i].total);
		   	obj[i].average=obj[i].total/5;
		   	printf("\naverage=%d",obj[i].average);
		   	printf("\n____________________\n");
		   }
		 return 0;
		 }  
    	
	    
