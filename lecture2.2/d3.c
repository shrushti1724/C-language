#include<stdio.h>
#include<conio.h>

void main()
{

	float b,h;
	float area;
	printf("Enter the height");
	scanf("%f",&h);
	printf("Enter the base");
	scanf("%f",&b);
	
	area =  0.5*(b*h);
	printf("Area is %f",area);
	
	getch();
	
}
	
