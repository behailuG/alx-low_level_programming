#include "main.h"
/**
 * *_strncat - string concatination
 * @dest: destination
 * @src: source
 * @n: n time
 * Return: return
 */
char *_strncat(char *dest, char *src, int n)
{
	int counter = 0, j = 0;

	while (dest[counter])
	{
		counter++;
	}

	while (j < n && src[j])
	{
		dest[counter] = src[j];
		counter++;
		j++;
	}

	dest[counter + n + 1] = '\0';

	return (dest);
}
