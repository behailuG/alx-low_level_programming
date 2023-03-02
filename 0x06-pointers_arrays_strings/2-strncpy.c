#include "main.h"
/**
 * *_strncpy - string copy
 * @dest: destination
 * @src: source
 * @n: number
 * Return: copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c, i;

	while (src[c] != '\0')
		c++;
	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dets[i] = src[i];
	}
	dest[c] = '\0';

	return (dest);
}
