#include "main.h"
/**
 * rev_string - revese string
 * @s: param
 */
void rev_string(char *s)
{
	int i, c, k;
	char *a, aux;

	a = s;
	if (s[0] != '\0')
	{
	while (s[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
	}
}
