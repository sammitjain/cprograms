//Program:	Convert a decimal number to its binary equivalent.
//Programmer:	Sammit Jain, 2014B4PS909G

#include<stdio.h>
#include<math.h>

  
    void main()
      {
       int arr[50];
       printf("\n\nEnter the number to be converted: ");
      int num;
      scanf("%d",&num);
      int temp = num;
      int i,count;
      count=0;
       for(i=0; temp>0; i++)
        {
	arr[i]=temp%2;
	temp/=2;
	count++;
	}
	printf("The number to the base 2 is: ");
	for(i=count-1;i>=0;i--)
	 {
	  printf("%d",arr[i]);
	 }
	 printf("\n");
      }