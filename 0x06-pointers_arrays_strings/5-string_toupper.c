#include "main.h"
/**
 * *string_toupper - convert lower case to upper case
 * @p: string
 * Return: upper case
 */
char *string_toupper(char *p)
{
	int i;
	
	i = 0;
	while (p[i])
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] -= 32;
		}
		i++;
	}
	return (p)
}
