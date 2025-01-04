//4. Write a program to find largest element in the array using Pointer. [B]

#include <stdio.h>

int main()
{
    int size;

    printf("Enter size of Array:");
    scanf("%d", &size);

    int array[size];

    for(int i = 0; i < size; i++)
    {
        printf("Enter Elements of Array[%d]: ",i);
        scanf("%d", &array[i]);
    }

    int *large = array;

    for(int i = 0; i < size; i++)
    {
        if(*large < array[i])
        {
            *large = array[i];
        }
    }

    printf("Largest Elmenets of Array is: %d", *large);
    return 0;
}
