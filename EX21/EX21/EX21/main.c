#include<stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp;

    int i, prime, lim_up, n;
   


    fp = fopen("prime numbers.txt", "w");
    if (fp == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("\nEnter number : ");
    scanf_s("%d", &lim_up);


    for (n = 1; n < lim_up; n++)
    {
        prime = 1;
        for (i = 2; i < n; i++)
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        if (prime)
        {
            printf(" %d ", n);

            fprintf(fp, " prime numbers : %d \n ", n);
        }
    }
    printf("\n Details successfully written to the file\n\n");


    fclose(fp);
   

    return 0;
}