//LAB 3
//2. Read two matrices, first 3x2 and second 2x3, perform multiplication operation and store result in third
//matrix and print it. [B]
#include <stdio.h>

int main()
{
	int a[3][2], b[2][3], c[3][3];
	int i, j, k;
	
	printf("Enter Elements for [Matrix : A]:\n");
	for(i = 0; i < 3; i++)
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
		for(j = 0; j < 3; j++)
		{
			printf("Enter Elements for Matrix: b[%d][%d]:",i+1,j+1);
			scanf("%d", &b[i][j]);
		}
		printf("\n");
	}
	
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			for(k = 0; k < 2; k++)
			{
				c[i][j] = a[i][k] * b[k][j];
			}
			
		}
	}
	
	printf("Multiplication Of Matrix: a and Matrix: b is:RESULT = [Matrix: C]\n");
	for(i = 0; i< 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
