//Program:	To find the largest element in a 1D array.
//Programmer:	Sammit Jain, 2014B4PS909G

#include<stdio.h>

 void main()
   {
    
    int arr[25];
    printf("\nSpecify the number of elements in the array: ");
    int n;
    scanf("%d",&n);
    //Entering the elements
    int i;
    for(i=0;i<n;i++)
     {
       scanf("%d",&arr[i]);
     }
     int max=arr[0];
     int temp;
     for(i=1;i<n;i++)
     {
       if(max<arr[i])
        {
	  max=arr[i];
	  
	}
     }
     printf("\nThe largest element in the array is: %d\n",max);
   }


