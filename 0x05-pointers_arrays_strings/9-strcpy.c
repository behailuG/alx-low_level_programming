#include "main.h"
/**
 * *_strcpy - copy string array
 * @dest: destination
 * @src: source
 * Return: detination
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
		i++;
	for (j = 0; j <= i; j++)
		dest[j] = src[j];
	return (dest);
}
