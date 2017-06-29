//Program:	Pattern - Pyramid using nested for loops. (Series of stars acc to natural numbers)
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
	     
	     if(k%2==0)
	     printf("   ");      //The blank space can be replaced by any special character, acc to the,
	     else		 //requirement of the program.
	     printf(" * ");
	   }
      }
      printf("\n\n");
   }