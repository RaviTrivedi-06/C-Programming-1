#include <stdio.h>
    int main ()
                {
                    printf("Enter the temperature in Fahrenheit : ");
                    float F;
                    scanf("%f",&F);

                    float C = (F-32)*5/9;
                    printf("The temperature in Celsius is : %f",C);

                    return 0;
                }
