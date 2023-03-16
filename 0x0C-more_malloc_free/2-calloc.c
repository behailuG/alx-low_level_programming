#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocate memory using calloc
 * @nmemb: number of array
 * @size: array size
 * Return: allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = nmemb * size;
	s = malloc(i);
	if (s == NULL)
		return (NULL);
	while (j < i)
	{
		s[j] = 0;
		j++;
	}
	return (s);
}
