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
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
