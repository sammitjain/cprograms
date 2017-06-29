//Program:	Pattern - Pyramid using nested for loops. (Series of odd number of stars, easy)
//Programmer:	Sammit Jain, 2014B4PS909G

#include<stdio.h>

 void main()
   {
     int i,j,k,n;
     printf("\n\nEnter the number of rows required in the pattern :  ");
     scanf("%d",&n);
     for(i=1; i<=n; i++)
      {
       printf("\n");
        
	 for(j=n-i; j>=1; j--)
	   {
	     printf("   ");  
	   }
	 
	 for(k=2*i-1; k>=1; k--)
	   {
	     printf(" * ");
	   }
      }
      printf("\n\n");
   }