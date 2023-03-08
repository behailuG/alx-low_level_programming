#include "main.h"
/**
 * _print_rev_recursion - print reversly
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		s++;
		i++;
	}
	if (s[i] != 0)
	{
		_putchar(s);
		s--;
		_print_rev_recursion(*s);
	}
	if (s[i] == '\0'')
		_putchar('\n');
}
