#include "main.h"
/**
 * *_strstr - string searching
 * @haystack: string
 * @needle: match string
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i] == needle[j])
			{
				s += i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
