//Program:	Check if a character entered by the user is a vowel or a consonant.
//Programmer:	Sammit Jain, 2014B4PS909G


#include<stdio.h>

 void main()
  {
   printf("\nEnter the character to be checked. \n");
   char c;
   scanf("%c",&c);
   if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
      printf("\n %c is a vowel.", c);
    }
   else
   printf("\n %c is a consonant.",c);
   
  }