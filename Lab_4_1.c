//1. Read n numbers in an array and print it using pointer. [A]

#include <stdio.h>
void main()
{
    int size;

    printf("Enter size of Array: ");
    scanf("%d", &size);

    int array[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter elements of array[%d]: ", i);
        scanf("%d",&array[i]);
    }

    printf("Printing Array Using Pointer: \n");

    int *p = array;

    for(int i = 0; i < size; i++)
    {
        printf("%d : %d",i,*p);
        *p++;
    }
}
