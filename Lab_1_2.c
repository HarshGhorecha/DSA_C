// Write a program to find factors of a given number. [A]
#include <stdio.h>

int main()
{
    int num,i;

    printf("enter the number:");
    scanf("%d", &num);

    printf("Factor of %d is: ",num);

    for(i=1; i<=num; i++)
    {
        if(num % i == 0)
        {
            printf("%d",i );
        }
    }
    return 0;
}
