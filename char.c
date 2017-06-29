#include<stdio.h>

 void main()
   {
    char str[50];
    int i,j;
    for(i=0;i<1000;i++)
    {
     scanf("%c",&str[i]);
    }
    for(i=0;i<1000;i++)
    {
     printf("%c",str[i]);
    }
   }