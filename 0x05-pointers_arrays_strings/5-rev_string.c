#include "main.h"
/**
 * rev_string - revese string
 * @s: param
 */
void rev_string(char *s)
{
	int i, j, c;

	char *a;

	i = 0;
	a = s;
	while (s[i] != '\0')
		i++;
	c = 0;
	for (j = i; j > i - 1; j--)
	{
		if (i < 0)
			break;
		a[c] = s[j - 1];
		i--;
		c++;
	}
}
