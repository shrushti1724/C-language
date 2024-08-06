#include<stdio.h>

void main()

{
	int a,b,c,d,e;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	printf("enter d:");
	scanf("%d",&d);
	printf("enter e:");
	scanf("%d",&e);
	
	if(a>b)
	{
		if(a>c)
		{
		  printf("a is max");	
		}
		else
		{
			printf("c is max");
		}
		if(c>d)
		{
			printf("c is max");
		}
		else
		{
			printf("d is max");
		}
	
	}
	else
	{
		if(d>e)
		{
			printf("d ia max");
		}
		else
		{
			printf("e is max");
		}
	} 
}
	
	
	
	
	
	
	
	
	
	
	
	
