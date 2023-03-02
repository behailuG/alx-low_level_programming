#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: string one
 * @s2: string two
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int a, b, c, i, j;

	a = 0;
	b = 0;
	c = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	if (a >= b)
		j = a;
	else
		j = b;
	for (i = 0; i < j; j++)
	{
		if (s1[i] == s2[i])
			continue;
		else
		{
			c = s1[i] - s2[i];
		}
	}
	return (c);
}
