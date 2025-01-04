//// 2. Write a C program to swap two numbers, calling an UDF by reference. [A]

#include <stdio.h>

void swap(int *a, int *b)
{
    printf("Value of A before swapping: %d", *a);
    printf("\nValue of B before swapping: %d", *b);

    int temp = *a;
    *a = *b;
    *b = temp;

    printf("\nValue of A after swapping: %d", *a);
    printf("\nValue of B after swapping: %d", *b);
}

int main()
{
    int a, b;

    printf("Enter Value of A:");
    scanf("%d", &a);
    printf("\nEnter Value of B:");
    scanf("%d", &b);

    swap(&a,&b);

    printf("\nValue of A = %d and B = %d in main",a,b);
    
    return 0;
}
