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

	while (s[i])
	{
		if (s[i] == 'c')
		{
			s = s + i;
			return (s);
		}
	}
	return ('\n');
}
