//LAB 3
//1. Read two 2x2 matrices and perform addition of matrices into third matrix and print it. [A]

#include <stdio.h>

int main()
{
	int a[2][2], b[2][2], c[2][2];
	int i, j;
	
	printf("Enter Elements for [Matrix : A]:\n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Enter Element for Matrix: a[%d][%d]: ", i+1,j+1);
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter Elements for [Matrix : B]: \n");
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Enter Elements for Matrix: b[%d][%d]:",i+1,j+1);
			scanf("%d", &b[i][j]);
		}
		printf("\n");
	}
	
	
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("Addition Of Matrix: a and Matrix: b is:RESULT = [Matrix: C]\n");
	for(i = 0; i< 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%d", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
