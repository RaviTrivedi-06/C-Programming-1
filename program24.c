#include <stdio.h>
        int main ()
                {
                    float A,B,C;
                    printf("Enter A : ");
                    scanf("%f",&A);


                    printf("\nEnter B :");
                    scanf("%f",&B);


                    C = A;
                    A = B;
                    B = C;

                    printf("\nThe values after swapping are : ");
                    printf("\nA : %f",A);
                    printf("\nB : %f",B);

                    return 0;
                }
