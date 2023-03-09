#include "main.h"
/**
 * *_memcpy - memory copy
 * @dest: destination
 * @src: source
 * @n: number of memory byte
 * Return: return copied destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
