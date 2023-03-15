#include "main.h"
#include <stdlib.h>
/**
 * *create_array - create array of char memory allocation
 * @size: size of array
 * @c: character
 * Return: return pointer
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	int i = 0, j = size;

	if (size != 0)
	{
		str = malloc(sizeof(char) * size);
		while (i < j && str != NULL)
		{
			str[i] = c;
			i++;
		}
		return (str);
	}
	return ('\0');
}
