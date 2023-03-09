#include "main.h"
/**
 * *_memset - memset allocate memory
 * @s: string param
 * @b: constant value
 * @n: number of allocated space
 * Return: allocated space
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
