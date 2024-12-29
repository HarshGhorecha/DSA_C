//Write a program to calculate power using loop and recursion. [B]
//USING LOOP
#include <stdio.h>

int main()
{
    int base, exponent, i;
    int result = 1;

    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter exponent: ");
    scanf("%d",&exponent);

    for(i=1; i<=exponent; i++)
    {
        result *= base;
    }

    printf("%d^%d is: %d",base,exponent,result);

    return 0;
}

/*
USING RECURSION
#include <stdio.h>

int findPower(int base, int exponent)
{
    if(exponent == 0)
        return = 1;
    else
        return base * findPower(base, exponent - 1);
}

int main()
{
    int base, exponent, i;
    int result;

    printf("Enter base:");
    scanf("%d",&base);
    printf("Enter exponent");
    scanf("%d",&exponent);

    result = findPower(base,exponent);

    print("%d^%d is : %d",base,exponent,result);

    return 0;
}
*/
