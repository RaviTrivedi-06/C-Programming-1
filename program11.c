#include <stdio.h>

int main()
        {
            float grams;
            printf("Enter the weight in grams :");
            scanf("%f",&grams);

            float kg = grams * 0.001 ;
            printf("The weight in Kilograms is:%f",kg);

                return 0;
        }
