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
	int c, i;

	c = 0;
	while (dest[c] != '\0')
		c++;
	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dest[c] = src[i];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
