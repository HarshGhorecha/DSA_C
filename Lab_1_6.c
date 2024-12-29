//6. Write a program to display prime numbers between two intervals. [C]
#include <stdio.h>
#include <math.h>

int main()
{
    int start, end, i, j, isPrime;

    printf("Enter start number: ");
    scanf("%d", &start);
    printf("\nEnter end number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++)
    {
        if (i < 2)
            continue; // Skip numbers less than 2

        isPrime = 1; 

        
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        
        if (isPrime)
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
