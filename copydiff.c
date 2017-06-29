//Program:	to copy elements of an array A into another array B so that following sequences should be followed:
		//1. All even elements of A from left to right are copied into C from left to right.
		//2. All odd elements of A from left to right are copied into C from right to left.
//Programmer:	Sammit Jain, 2014B4PS909G

#include<stdio.h>

 void main()
  {
    int A[10];
    int B[10];
    
    printf("\nPlease specify the number of elements in the array: ");
   int n;
   scanf("%d",&n);
   //Entering the elements
    int i,j,k;
    j=0;k=0;
    for(i=0;i<n;i++)
     {
       scanf("%d",&A[i]);
     }
     for(i=0;i<n;i++)
      {
        if(A[i]%2==0)
	 {
	  B[j]=A[i];
	  j++;		//Keeps track of elements in the beginning
	 }
	 else
	 {
	 B[9-k]=A[i];
	 k++;		//Keeps track of elements at the end
	 }
      }
      for(i=0;i<10;i++)
      printf(" %d ",B[i]);
      printf("\n");
  }