#include "main.h"
/**
 * _strspn - string match
 * @s: string
 * @accept: match string
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, len = 0;

	while (accept[i])
	{
		j = 0;
		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				len++;
			}

			j++;
		}
		i++;
	}
	return (len);
}
