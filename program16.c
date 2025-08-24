#include <stdio.h>
    int main ()
               {
               float P,R,N;
               printf("Enter the principal amount : ");
               scanf("%f",&P);

               printf("\nEnter the Rate of interest : ");
               scanf("%f",&R);

               printf("\nEnter the duration(time) : ");
               scanf("%f",&N);

               float I = P*R*N/100;

               printf("\nThe required Interest is : %f",I);

               return 0;
               }
