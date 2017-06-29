//Program:	Pattern in CP Lab (Tuesday)
//Programmer:	Sammit Jain, 2014B4PS909G

#include<stdio.h>

 void main()
   {
    printf("\nEnter the number of rows required in the pattern: ");
    int n,i,j,k,l;
    scanf("%d",&n);
     for(i=0;i<n;i++)
      {
      printf("\n\n");
       for(j=1; j<=n-i; j++)
        {
	 printf(" %d ",j);
	}
       for(k=1; k<=2*i; k++)
        {
	 printf(" * ");
	}
	for(l=n-i;l>=1;l--)
	{
	printf(" %d ",l);
	}
      }
      printf("\n\n");
   }