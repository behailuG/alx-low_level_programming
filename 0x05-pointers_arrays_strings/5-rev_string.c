#include "main.h"
/**
 * rev_string - revese string
 * @s: param
 */
void rev_string(char *s)
{
	int c, i;
	char tmp

	while (s[i++])
		c++;
	for (i = c - 1; i >= c / 2; i--)
	{
		tmp = s[i];
		s[i] = s[c - i -1];
		s[c - i - 1] = tmp;
	}
}
