#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: param one
 * @n: number of iteration
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != i - 1)
			printf(", ");
	}
	printf("\n");
}
