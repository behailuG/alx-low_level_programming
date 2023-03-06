#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - diagonal square summation
 * @a: array list
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i][j];
			if (j == (size - (i + 1)))
				sum2 += a[i][j];
		}
	}

	printf("%d, %d\n", sum1, sum2);
}
