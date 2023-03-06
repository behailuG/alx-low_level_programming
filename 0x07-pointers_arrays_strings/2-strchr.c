#include "main.h"
/**
 * *_strchr - string finder
 * @s: string
 * @c: character
 * Return: retun string
 */
char *_strchr(char *s, char c)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
		i++;
	for (j = 0; j <= a; j++)
	{
		if (s[j] == c)
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}
