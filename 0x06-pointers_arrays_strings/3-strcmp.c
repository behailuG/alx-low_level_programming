#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: string one
 * @s2: string two
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	int c, i, j;

	c = 0;
	while (s1[c])
		c++;
	for (i = 0; i < c; c++)
	{
		if (s1[i] > s2[i])
			j = 1;
		else if (s1[i] == s2[i])
			j = 0;
		else
			j = -1;
	}
	return (j);
}
