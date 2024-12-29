//LAB 2
//5. Read n numbers in an array and print it in reverse order. [B]

#include <stdio.h>

int main()
{
	int length, i;
	
	printf("Enter length of Array: ");
	scanf("%d", &length);
	
	int number[length];
	
	for(i=0; i<length; i++)
	{
		printf("Enter Element of Array %d: ", i + 1);
		scanf("%d", &number[i]);
	}
	
	printf("Printing Array: ");
	for(i=0; i<length; i++)
	{
		printf("%d",number[i]);
	}
	
	printf("\nPrinting Array in Reverse in Order: ");
	for(i=length - 1; i>=0; i--)
	{
		printf("%d",number[i]);
	}
	
	
	
	return 0;
}
