#include <stdio.h>
    int main()
            {
            float L;
        printf("Enter the length of rectangle : ");
        scanf("%f",&L);

        float B;
        printf("Enter the length of rectangle : ");
        scanf("%f",&B);

        float A = L*B;
        float P = 2*(L+B);

        printf("Perimeter of the given rectangle is : %f\n",P);
        printf("Area of the given rectangle is : %f",A);

        return 0;
            }
