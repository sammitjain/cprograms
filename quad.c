//Program:	Roots of a quadratic equation
//Programmer:	Sammit Jain, 2014B4PS909G

#include<stdio.h>
#include<math.h>

 void main()
   {
     printf("\nEnter the value of the coefficients for the quadratic equation\n");
     double a,b,c,x1,x2;
     scanf("%lf%lf%lf",&a,&b,&c);
     x1 = (-b + sqrt(b*b - 4*a*c))/2*a;
     x2 = (-b - sqrt(b*b - 4*a*c))/2*a;
     printf("x1 = %lf",x1);
     printf(" ,x2 = %lf",x2);
   }