#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - new memory allocation
 * @str: string
 * Return: new pointer
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;

	char *s;

	if (str != NULL)
	{
		while (str[j] != '\0')
			j++;
		s = malloc((sizeof(char) * j) + 1);
		while (i < j)
		{
			s[i] = str[i];
			i++;
		}
		s[i] = '\0';
		return (s);
	}
	return (NULL);
}
