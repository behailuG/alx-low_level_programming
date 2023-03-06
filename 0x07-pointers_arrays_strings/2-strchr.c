#include "main.h"
/**
 * *_strchr - string finder
 * @s: string
 * @c: character
 * Return: retun string
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
		i++;
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}
