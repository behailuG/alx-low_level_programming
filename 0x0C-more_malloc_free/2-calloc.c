#include "main.h"
#include <strlib.h>
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

	j = nmemb * size;
	s = (int *)calloc(j, sizeof(int));
	if (s == NULL)
		return (NULL);
	return (s);
}
