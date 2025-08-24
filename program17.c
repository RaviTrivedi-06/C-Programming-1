#include <stdio.h>
    int main()
        {
        float L;
        printf("Enter the side length of square : ");
        scanf("%f",&L);

        float A = L*L;
        float P = 4*L;

        printf("Perimeter of the given square is : %f\n",P);
        printf("Area of the given square is : %f",A);

        return 0;

        }
