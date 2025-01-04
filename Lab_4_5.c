//// Write a program to check if the string is a palindrome or not using Pointer.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];

    printf("Enter the string: ");
    scanf("%s",&str);

    int *ptr = str; 

    int len = strlen(str); // for the length

    char *rev = str + len - 1; // revers the string

    while (ptr <= rev)
    {
        if(*ptr != *rev )
        {
            printf("THE STRING IS NOT PALINDROME \n ");
            return 0;
        }
        ptr++;
        rev--;
    }
    printf("THE STRING IS PALINDROME ");
    return 0;
}
