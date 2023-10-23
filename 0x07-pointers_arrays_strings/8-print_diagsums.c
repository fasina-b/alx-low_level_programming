#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals
 * @a: Pointer to the square matrix
 * @size: The size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;
	int j;


	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i * size + j];
			if (i == size - 1 - j)
				sum2 += a[i * size + j];
		}
	}

	printf("%d, %d\n", sum1, sum2);
}
