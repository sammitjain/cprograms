//Program:      Diamond Pattern according to the number of rows entered by the user (odd rows)
//Programmer:   Sammit Jain, 2014B4PS909G

#include<stdio.h>

 void main()
   {
       printf("Enter the number of rows you want in the diamond (odd number of rows): ");
       int n,i,j,k,l,m,p;
       scanf("%d",&n);
        p=n/2 +1;
       
       for(i=1;i<=p;i++)
        {
           printf("\n");

            for(j=p-i;j>=1;j--)
            {
                printf(" ");
            }

            for(k=1;k<=2*i-1; k++)
            {
                if(k%2==0)
                {
                    printf(" ");
                }
                else
                printf("*");
            }


        }
       
       printf("\n");
       
       for(i=p-1;i>=1;i--)
        {
          // printf("\n\n");

            for(j=1;j<=p-i;j++)
            {
                printf(" ");
            }

            for(k=2*i-1;k>=1;k--)
            {
                if(k%2==0)
                {
                    printf(" ");
                }
                else
                    printf("*");
            }

          printf("\n");
       }

   }