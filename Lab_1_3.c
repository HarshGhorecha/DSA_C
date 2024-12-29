//Write a program to check whether a number is prime or not. [A]
#include <stdio.h>

int main()
{
    int n,i;
    int flag = 0;

    printf("Enter the number: ");
    scanf("%d",&n);

    if(n == 0 || n == 1)
        flag = 1;

    for(i=2; i<=n/2; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag = 0)
    {
    	printf("Entered %d number is prime number",n);
	}
    else
    {
    	printf("Entered %d number is Not-prime number",n);
	}
    return 0;
}
