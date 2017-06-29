//Program:	Area of a scalene triangle
//Programmer:	Sammit Jain, 2014B4PS909G

#include<stdio.h>
#include<math.h>

void main()
 {
	float side1, side2, angle, area;
	float PI = 3.14;
	printf("\nEnter the first side of the triangle:  ");
	scanf("%f", &side1);
	printf("\nEnter the second side of the triangle: ");
	scanf("%f", &side2);
	printf("Enter the included angle between the two sides: ");
	scanf("%f", &angle);
	
	area = 0.5*side1*side2*sin((M_PI / 180)*angle);
	
	
	printf("\nThe area of the triangle is : %f", area);
	
	
	
 }