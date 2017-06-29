//Program:	Program to sort an array (Using selection sort)
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
    int temp,key;
    for(i=0;i<n-1;i++)
     {
      key=i;
       for(j=i+1;j<n;j++)
       {
        if(arr[j]<arr[key])
	 {
	   key=j;
	 }
       }
       temp=arr[i];
       arr[i]=arr[key];
       arr[key]=temp;
     }
     printf("\n");
     for(i=0;i<n;i++)
     {
       printf("%d\n",arr[i]);
     }
     
  }