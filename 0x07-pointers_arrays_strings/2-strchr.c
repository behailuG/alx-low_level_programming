#include "main.h"
/**
 * *_strchr - string finder
 * @s: string
 * @c: character
 * Return: retun string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
		i++;
	}
	return ('\0');
}
