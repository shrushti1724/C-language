#include<stdio.h>

void main()

{
	int a,b,c,d;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	printf("enter d:");
	scanf("%d",&d);
	
	//a,b,c,d
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
	}
	else
	{
		if(b>c)
		{
			printf("b is max");
		}
		else
		{
			printf("c is max");
			
		}
		if (c>d)
		{
			printf("c is max ");
		}
		else
		{
			printf("d is max");
		}
	}
	
	
	
	
	
	
	
	
	
	
}
