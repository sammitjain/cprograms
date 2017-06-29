//Program:	Finding the three highest numbers of a 1D array. (Using bubble sort)
//Programmer:	Sammit Jain, 2014B4PS909G

#include<stdio.h>

 void main()
  {
   int arr[25];
   printf("\nPlease specify the number of elements in the array: ");
   int n;
   scanf("%d",&n);
   //Entering the elements
    int i,j;
    for(i=0;i<n;i++)
     {
       scanf("%d",&arr[i]);
     }
    int temp;
 
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
      {
       if(arr[i]<arr[j])
       {
        temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
       }
      }
    }
    printf("Printing three highest numbers: \n");
    for(i=0;i<3;i++)
    printf("%d\n",arr[i]);
    printf("\n");
    
  }