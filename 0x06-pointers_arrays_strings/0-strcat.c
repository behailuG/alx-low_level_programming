#include "main.h"
#include <string.h>
/**
 * *_strcat - string concatination
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(*dest, *src));
}
