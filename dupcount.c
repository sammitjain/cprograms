//Program:	To display the number of occurences of each array element.
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
void sortarr(int arr[],int n)
{
int temp,i,j;
    //First sorting the array. Will help later.
    temp=arr[0];
    for(i=0;i<n;i++)
    { 
    for(j=i+1;j<n;j++)
      {
        if(arr[j]<arr[i])
	{
	 temp = arr[j];
	 arr[j] = arr[i];
	 arr[i] = temp;
	}
      }
    }
    
}


void distarr(int arr[],int n)
{
 int distinct[25];
    int i,j,var=0;
    for(i=0;i<n-1;i++)
     {
      
        if(arr[i]!=arr[i+1])
	{
	distinct[var++]=arr[i];
        }
      
     }
     if(arr[n-1]!=arr[n-2])
     {
      distinct[var]=arr[n-1];
     }
     else
     distinct[var]=arr[n-1];
     printf("Distinct Element: ");
     printarr(distinct,var+1);
}
void countarr(int arr[],int n)
{
int counter[25];  //Keeps track of the count
    int i,j,count=1;
    int l=0;int spe=0;;
    for(i=0;i<n-1;i++)
     {
     count=1;
       for(j=i+1;j<n;j++)
       {
        if(arr[i]==arr[j])
	{
	count++;
	spe=j;
	}
       }
       if(spe!=0)
       i=spe;
       counter[l++]=count;
       
     }
     count=1;
     if(arr[n-1]!=arr[n-2])
     {
     counter[l++]=count;
     }
     printf("Number of Times : ");
     printarr(counter,l);
}
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
    
    sortarr(arr,n);
    printarr(arr,n);
    distarr(arr,n); 
    countarr(arr,n);   
     printf("\n");
     /*for(i=0;i<l+1;i++)
     {
      printf("%d appears %d times.\n",distinct[i],counter[i]);
     }

     printf("\n");  */ 
  }