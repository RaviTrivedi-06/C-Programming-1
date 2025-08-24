#include <stdio.h>

int main()
        {
            float kg;
            printf("Enter the weight in kilograms :");
            scanf("%f",&kg);

            float grams = kg * 1000 ;
            printf("The weight in grams is:%f",grams);

                return 0;
        }

