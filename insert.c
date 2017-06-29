//Program:	To insert an element in its proper place in a sorted array
//Programmer:	Sammit Jain, 2014B4PS909G

#include<stdio.h>

 void sortarr(int arr[],int n)
  {
   int i,j,temp;
    for(i=0;i<n;i++)
     {
      for(j=i+1;j<n;j++)
       {
        if(arr[i]>arr[j])
	{
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	}
       }
     }
  }
  
  void printarr(int arr[],int n)
   {
    int i;
    printf("\n");
    for(i=0;i<n;i++)
     {
      printf(" %d ",arr[i]);
     }
     printf("\n");
   }
   
  void main()
    {
     int arr[25];
     int i,j,temp;
     printf("\nPlease specify the number of elements in the array: ");
     int n;
     scanf("%d",&n);
     
     for(i=0;i<n;i++)
      {
       printf("\nEnter element %d: ",i+1);
       scanf("%d",&arr[i]);
      }
      
      printf("\nThe original array is: ");
      printarr(arr,n);
      printf("\nThe sorted array is: ");
      sortarr(arr,n);
      printarr(arr,n);
      printf("\nEnter the element to be added: ");
      int ele;
      scanf("%d",&ele);
      
      
      for(i=0;i<n;i++)
      {
		if(ele<arr[i])
		{
		 for(j=n-1;j>=i;j--)
	
		arr[j+1]=arr[j];
		arr[i]=ele;
		break;
		}      
      }
           printarr(arr,n+1);
    }