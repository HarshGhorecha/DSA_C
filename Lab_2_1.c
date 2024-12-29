//lab = 2 
//1. Read n numbers in an array and print their sum and average. [A]
#include <stdio.h>

int main()
{
	int length;
	int i;
	float sum = 0;
	float avg;
	
	printf("Enter length of array: ");
	scanf("%d",&length);
	
	int number[length];
	
	for(i=0; i<length; i++)
	{
		printf("Enter Elements of array %d: " , i + 1);
		scanf("%d", &number[i]);
		
		sum = sum + number[i];
	}
	
	avg = sum/length;
	
	printf("Sum of array is: %f",sum);
	printf("\nAverage of array is: %f",avg);
	
	return 0;
}
