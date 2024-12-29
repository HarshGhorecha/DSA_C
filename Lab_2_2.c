//LAB 2
//2. Write a program to find the largest element in an array. [A]
#include <stdio.h>

int main()
{
	int length, largest, i;
	
	printf("Enter length of Array: ");
	scanf("%d", &length);
	
	int number[length];
	
	for(i=0; i<length; i++)
	{
		printf("Enter Element of Array %d: ", i + 1);
		scanf("%d", &number[i]);
	}
	
	largest = number[1];
	
	for(i=0; i<length; i++)
	{
		if(largest < number[i])
		{
			largest = number[i];
		}
	}
	
	printf("Largest Element in Array is: %d", largest);
	
	return 0;
}
