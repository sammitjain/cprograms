#include<stdio.h>
 void main()
   {
     int a = 10;
     unsigned long int b = 12;
     float f = 10.02;
     //unsigned float uf = 20.002;
     double d = 10.29;
     long l = 1009;
     printf("\n\n");
     printf("The size of integer data type in my C is			: %lu\n",sizeof(a));
     printf("The size of long integer data type in my C is		: %lu\n",sizeof(l));
     printf("The size of unsigned long integer data type in my C is	: %lu\n",sizeof(b));
     printf("The size of float data type in my C is			: %lu\n",sizeof(f));
  //   printf("The size of unsigned long float data type in my C is	: %lu\n",sizeof(uf));
     printf("The size of double data type in my C is			: %lu\n",sizeof(d));    
    }