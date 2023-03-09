#include "main.h"
/**
 * print_rev - display string reves
 * @s: param
 */
void print_rev(char *s)
{
	int counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	while (s[counter - 1] != '\0')
	{
		_putchar(s[counter - 1]);
		counter--;
	}
	_putchar('\n');
}
