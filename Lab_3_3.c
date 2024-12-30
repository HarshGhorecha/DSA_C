//3. Write a program to find transpose of a square matrix. [C]

#include <stdio.h>

int main()
{
	int i, j, size;
	
	printf("Enter the size of Square Matrix: ");
	scanf("%d",&size);
	
	int orignal[size][size];
	int transpose[size][size];
	
	printf("Enter Elements for Orignal Matrix: \n");
	for(i=0; i < size; i++)
	{
		for(j=0; j < size; j++)
		{
			printf("Enter Elements of Orignal[%d][%d]: ",i+1, j+1);
			scanf("%d",&orignal[i][j]);
		}
	}
	
	for(i=0; i < size; i++)
	{
		for(j=0; j < size; j++)
		{
			transpose[i][j] = orignal[i][j];
		}
	}
	
	printf("\nOrignal Matrix: \n");
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			printf("%d\t", orignal[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTranspose Matrix: \n");
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			printf("%d\t", transpose[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
