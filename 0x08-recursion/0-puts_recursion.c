#include "main.h"
/**
 * _puts_recursion - display string recursivly
 * @s: string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != 0)
	{
		_putchar(*s);
		s++;
		if (s[i] != '\0')
			_puts_recursion(s);
	}
	if (s[i] == '\0')
		_putchar('\n');
}
