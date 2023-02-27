#include "main.h"
/**
 * rev_string - revese string
 * @s: param
 */
void rev_string(char *s)
{
	int counter, i;
	
	char *a, b;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	a += (counter-1);
	for (i = 0; i < (counter / 2); i++)
	{
		b = s[i];
		s[i] = *a;
		*a = b;
		a--;
	}
}
