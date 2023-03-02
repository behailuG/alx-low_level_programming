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
	int counter, i;

	while (dest[counter] != '\0')
		counter++;
	for (i = n; src[i] != '\0'; i++)
	{
		dest[counter] = src[i];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
