#include <stdio.h>
// Write a program to find factorial of a number using loop and recursion. [A]
//recursion
factRecursion(int n)
{
    if(n == 0 || n ==1)
    {
        return 1;
    }
    else
    {
        return n *  factRecursion(n-1);
    }
}
//loop
factLoop(int n)
{
    int factorial = 1;
    int i;
    int num;
    for(i=1; i<=n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    if(num < 0)
    {
        printf("Negative number enterd");
    }
    else
    {
        printf("Factorial of %d using Loop = %d", num, factLoop(num));
        printf("\nFactorial of %d using Recursion = %d", num, factRecursion(num));
    }
    return 0;
}
