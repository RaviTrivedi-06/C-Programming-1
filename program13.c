#include <stdio.h>

int main()
        {
            float bytes;
            printf("Enter Bytes :");
            scanf("%f",&bytes);

            float kilobytes = bytes/1024;
            printf("Kilobytes :%f",kilobytes);

             float megabytes = kilobytes/1024;
            printf("\nMegabytes :%f",megabytes);

             float gigabytes = megabytes/1024;
            printf("\nGigabytes :%f",gigabytes);


                return 0;
        }

