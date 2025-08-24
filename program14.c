#include <stdio.h>
    int main ()
                {
                    printf("Enter the temperature in celcius : ");
                    float C;
                    scanf("%f",&C);

                    float F = (9*C/5)+32;
                    printf("The temperature in Fahrenheit is : %f",F);

                    return 0;
                }
