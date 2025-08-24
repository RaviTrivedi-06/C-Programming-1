#include <stdio.h>
        int main()
            {
                float sub1;
                printf("Enter the marks obtained in Subject 1 : ");
                scanf("%f",&sub1);

                float sub2;
                printf("\nEnter the marks obtained in Subkect 2 : ");
                scanf("%f",&sub2);

                float sub3;
                printf("\nEnter the marks obtained in Subject 3 : ");
                scanf("%f",&sub3);

                float total = sub1 + sub2 + sub3;
                printf("\nThe total marks obtained is : %f",total);

                float average= total/3;
                 printf("\nThe average marks obtained is : %f",average);

                 return 0;

            }

