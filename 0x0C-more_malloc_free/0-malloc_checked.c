#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocate memory fro all type
 * @b: number of size
 * Return: allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
