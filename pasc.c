//Program:	Printing the Pascal Triangle
//Programmer:	Sammit Jain, 2014B4PS909G

#include<stdio.h>

  int fact(int a)
   {
     int factorial=1;
     if(a!=0)
     {
     while(a>1)
      {
       factorial*=a;
       a--;
      }
      }
      else
      factorial=1;
      return factorial;
   }
  int ncr(int n,int r)
   {
     int nCr;
     nCr = fact(n)/(fact(r)*fact(n-r));
     return nCr;
     
   }
  void main()
   {
    printf("\n\nEnter the number of rows in the Pascal Triangle: ");
    int rows;
    scanf("%d",&rows);
    int i,j,k;
    printf("\n");
     for(i=0; i<rows;i++)
      {
        printf("\n\n");
	for(j=rows-1-i;j>0;j--)
	 {
	 printf("   ");
	 }
	for(k=0;k<=i;k++)
	 {
	  printf(" %d    ",ncr(i,k));
	 }
      }
      printf("\n");
   }