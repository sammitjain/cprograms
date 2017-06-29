#include<stdio.h>

 void main()
{
 char choice;
	float radius;
	float pi = 3.14;
	float area, circumference;
	//printf("Enter the radius of the circle");
	//scanf("%f",&radius);
	printf("Enter your choice.");
	scanf("%c",&choice);
	if(choice=='1')
{
printf("Enter the radius of the circle");
scanf("%f",&radius);
circumference = 2*pi*radius;
printf("\nCircumference: %f",circumference);
}
else if(choice=='2');
{
printf("Enter the radius of the circle");
scanf("%f",&radius);
area = pi*radius*radius;
printf("\nArea: %f", area);
}
}
