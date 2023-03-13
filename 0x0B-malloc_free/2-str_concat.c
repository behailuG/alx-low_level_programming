#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - string concatination
 * @s1: string one
 * @s2: string two
 * Return: new pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	s = malloc((sizeof(char) * i + j + 1));

	if (s != NULL)
	{
		while (k < i)
		{
			s[k] = s1[k];
			k++;
		}
		l = k;
		k = 0;
		while (k < j)
		{
			s[l] = s2[k];
			l++;
			k++;
		}
		s[l] = '\0';
		return (s);
	}
	return (NULL);
}
