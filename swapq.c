#include<stdio.h>

 void swapf(float a, float b, int c)
  {
    if(c==1)
     {
       float temp = a;
       a = b;
       b = temp;
     }
     else
     {
       a=a+b;
       b=a-b;
       a=a-b;
       
     }
    printf("\n The swapped values are: \nFirst Number: %f\nSecond Number: %f\n",a,b); 
  }
  void swapc(char a, char b, int c)
   {
    if(c==1)
     {
       char temp = a;
       a = b;
       b = temp;
     }
     else
      {
        a=a+b;
        b=a-b;
        a=a-b;
      }
      printf("\n The swapped values are: \nFirst Character: %c\nSecond Character: %c\n",a,b);
   }
 
 void main()
  {
    printf("\nSelect the type of variables to be swapped: \n1. Float\n2. Character\n");
    int lol,c;
    char a,b;
    float m,n;
    scanf("%d",&lol);
    if(lol==1)
     {
      printf("\nEnter the two float values: ");
      scanf("%f %f",&m,&n);
      printf("\nChoose the method of swapping: \n1.Using a temporary variable \n2.Without using a temporary variable\n");
      scanf("%d",&c);             
	 swapf(m,n,c);
	 
	
     }
     else
     {
     printf("\nEnter the two characters: ");
      scanf(" %c %c",&a,&b);
      printf("\nChoose the method of swapping: \n1.Using a temporary variable \n2.Without using a temporary variable\n");
      scanf("%d",&c);             
	 swapc(a,b,c);
	 
     }
  }