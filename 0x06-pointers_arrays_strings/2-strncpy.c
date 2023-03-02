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
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
