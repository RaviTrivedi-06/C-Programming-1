#include <stdio.h>
        int main()
                {
                float gross_salary;
                printf("Enter the gross salary : ");
                scanf("%f",&gross_salary);

                float allowance=0.1*gross_salary;
                printf("\nAllowance : %f",allowance);

                float deduction=0.03*gross_salary;
                printf("\nDeduction : %f",deduction);

                printf("\nNet Salary = Gross Salary + Allowance - Deduction");


                float net_salary = gross_salary + allowance - deduction;

                printf("\nThe Net Salary is : %f",net_salary);

                return 0;


                }
