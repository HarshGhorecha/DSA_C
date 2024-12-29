//Write a program to find GCD using loop and recursion. [B]
//USING LOOP
#include <stdio.h>

int main()
{
    int num1, num2, gcd, i;

    printf("Enter two positive number: ");
    scanf("%d %d",&num1,&num2);

    for(i=1; i<=num1 && i<=num2; i++)
    {
        if(num1 % i == 0 && num2 % i ==0)
        {
            gcd = i;
        }
    }

    printf("GCD of %d and %d is: %d",num1,num2,gcd);
    return 0;
}

/*
USING RECURSION

#include <stdio.h>

int findGCD(int a, int b)
{
    if(b == 0)
        return a;
    else
        return findGCD(b, a % b);

    //return b == 0 ? a : findGCD(b,a % b);
}

int main(){
int i, num1, num2, gcd;

printf("Enter two postive numbers: ");
scanf("%d %d",num1,num2);

gcd = findGCD(num1,num2);

printf("GCD of %d and %d is: %d",num1,num2,gcd);

return 0;
}
*/

