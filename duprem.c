//Program:	To remove the duplicates from a	1D array
//Programmer:	Sammit Jain, 2014B4PS909G

 #include<stdio.h>
  
  void printarr(int a[],int n)
   {
   int i,j;
   printf("\n");
   for(i=0;i<n;i++)
    {
     printf(" %d ",a[i]);
    }
   printf("\n"); 
   }

  void main()
   {
   int arr[25];
   printf("\nPlease specify the number of elements in the array: ");
   int n;
   scanf("%d",&n);
   //Entering the elements
    int i,j,k;
    for(i=0;i<n;i++)
     {
       scanf("%d",&arr[i]);
     }
     int count=0;
    for(i=0;i<n;i++)
     {
       for(j=i+1;j<n;)
        {
	 if(arr[i]==arr[j])
	  {
	  
	   for(k=j;k<n;k++)
	   {
	   arr[k]=arr[k+1];
	   }
	n--;
	  }
	  else
	  j++;
	}
     }
     printarr(arr,n);    
   }