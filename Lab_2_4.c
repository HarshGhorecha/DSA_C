//LAB 2
//4. Write a program to copy all the elements of one array to another array. [B]
#include <stdio.h>

int main()
{
	int length,  i;
	
	printf("Enter length of Array: ");
	scanf("%d", &length);
	
	int array1[length];
	int array2[length];
	
	
	for(i=0; i<length; i++)
	{
		printf("Enter Element for Array1 %d: ", i + 1);
		scanf("%d", &array1[i]);
	}
	
	for(i=0; i<length; i++)
	{
		array2[i] = array1[i];
	}
	
	
	printf("Element of Array2 are : " );
	for(i=0; i<length; i++)
	{
		printf("%d", array2[i]);
	}
	
	
	return 0;
}
