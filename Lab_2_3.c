/*LAB 2
3. Read n numbers in an array then read two different numbers,
replace 1st number with 2nd number in an
array and print the final array. [A] */

#include <stdio.h>

int main()
{
int length, search, replace, i;
	
	printf("Enter length of Array: ");
	scanf("%d", &length);
	
	int number[length];
	
	for(i=0; i<length; i++)
	{
		printf("Enter Element of Array %d: ", i + 1);
		scanf("%d", &number[i]);
	}
	
	printf("Enter Element which you want to Replace:");
	scanf("%d", &search);
	
	printf("/nEnter New Element for Replacement: ");
	scanf("%d", &replace);
	
	for(i=0; i<length; i++)
	{
		if(number[i] == search)
		{
			number[i] = replace;
			break;
		}
	}
	
	printf("Final Array after Replacement");
	for (i=0; i<length; i++)
	{
		printf("%d", number[i]);
	}
	
	printf("/n");
	return 0;
}
