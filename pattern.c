//Program:	Print coordinates of a simple nested loop pattern (Easy)
//Programmer:	Sammit Jain, 2014B4PS909G

#include<stdio.h>

 void main()
   {
     printf("\nEnter the number of rows in the pattern :  ");
     int n;
     scanf("%d",&n);
     printf("\n\n");
     
     int i,j,k;
     
     for(i=1;i<=n;i++)
      {
        printf("\n");
	 
	 for(j=1;j<=i;j++)
	  {
	    printf(" %d,%d ",i,j);
	  }
      }
      
      printf("\n\n");
   }