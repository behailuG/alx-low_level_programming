#include "main.h"
/**
 * _print_rev_recursion - print reversly
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != 0)
	{
		if (s[i] != '\0')
		{
			s++;
			_print_rev_recursion(s);
		}
		s--;
	}
	s--;
	if (s[i] != '\0')
		_putchar(*s);
}
