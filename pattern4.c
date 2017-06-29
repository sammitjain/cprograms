//Program:	Number Pyramid using nested for loops. Eg: 1,232,23432...
//Programmer:	Sammit Jain, 2014B4PS909G

#include<stdio.h>

 void main()
   {
     int i,j,k,n,l,m;
     printf("\n\nEnter the number of rows required in the pattern :  ");
     scanf("%d",&n);
     for(i=1; i<=n; i++)
      {
       printf("\n");
        
	 for(j=n-i; j>=1; j--)
	   {
	     printf("   ");  
	   }
	 
	 for(l=i;l<=2*i-1;l++)
	    {
	      printf(" %d ",l);
	    }
	 for(m=2*i-2;m>=i;m--)
	    {
	      printf(" %d ",m);
	    }   
      }
      printf("\n\n");
   }