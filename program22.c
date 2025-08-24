#include <stdio.h>
        int main ()
            {
                float gross_sales;
                printf("Enter Gross Sales :");
                scanf("%f",&gross_sales);

                 printf("\nNet Sales = Gross sales - 10 percent discount on gross sales");


                float net_sales = gross_sales * 0.9;
                printf("\nNet sale is : %f ",net_sales);

                return 0;
            }
