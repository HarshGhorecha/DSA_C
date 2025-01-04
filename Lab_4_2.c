// 2. Write a C program to swap two numbers, calling an UDF by value. [A]

#include <stdio.h>

void swap(int a, int b)
{
    printf("Valur of A before swapping: %d",a);
    printf("\nValur of B before swapping: %d",b);

    int temp = a;
    a = b;
    b = temp;

    printf("\nValur of A after swapping: %d",a);
    printf("\nValur of B after swapping: %d",b);
}

int main()
{
    int a , b;

    printf("\nEnter Value Of A: ");
    scanf("%d",&a);
    printf("\nEnter Value Of B: ");
    scanf("%d",&b);

    swap(a,b);

    return 0;

}
