#include "main.h"
#include <stdlib.h>
/**
 * **strtow - string substring
 * @str: string
 * Return: return string
 */
char **strtow(char *str)
{
	int i, j = 0, k;
	char **s;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 9 || str[i] == 32)
			str[i] = '$';
		i++;
	}
	return (s);
}
