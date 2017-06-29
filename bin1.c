//Program:	Convert decimal to binary without arrays
//Programmer:	Sammit Jain, 2014B4PS909G

#include<stdio.h>
#include<math.h>

 void main()
  {
	printf("\n\nEnter the number to be converted: ");
      
      int num;
      scanf("%d",&num);
      int temp = num;
      int i,rem,bin;
      bin=0;
      while(temp>0)
       {
        rem=temp%2;
	temp/=2;
	bin= bin + rem*pow(10,i);
	
	 i++;
	
       }
       printf("\n\nThe binary equivalent is: %d",bin);

  }