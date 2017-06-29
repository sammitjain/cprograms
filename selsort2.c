//Program:	Modified Selection Sort to sort the column of a given 2D matrix
//Programmer:	Sammit Jain, 2014B4PS909G

#include<stdio.h>
 void printarr(int a[5][5])
  {int i,j;
  for(i=0;i<5;i++)
    {printf("\n\n");
     for(j=0;j<5;j++)
      {
       printf(" %d ",a[i][j]);
      }
    }
    printf("\n\n");
  
  }
 void main()
  {
   int arr[5][5]={{5,4,3,1,2},{3,1,4,5,2},{5,6,3,2,1},{2,6,8,3,1},{7,9,1,2,3}};
   
   int i,j,k,key,temp;
   printf("\nThe original array is: \n");
   printarr(arr);
   for(j=0;j<5;j++)
   {
    for(i=0;i<4;i++)
     {
       key=i;
       for(k=i+1;k<5;k++)
       {
        if(arr[k][j]<arr[key][j])
	 {
	  key=k;
	 }
       }
       temp = arr[i][j];
       arr[i][j] = arr[key][j];
       arr[key][j] = temp;
     }
   }
   printf("\nThe matrix sorted according to columns is: \n");
   printarr(arr);
   
  }