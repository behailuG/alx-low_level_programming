#include "main.h"
/**
 * *_strcat - string concatination
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int counter, i;

	counter = 0;
	while (src[counter] != '\0')
		counter++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[counter] = src[i];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
