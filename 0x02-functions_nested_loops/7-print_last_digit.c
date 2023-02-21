#include "main.h"
#include <limits.h>
/**
 * print_last_digit - print last digit
 * @c: parameter
 * Return: Last digit
 */
int print_last_digit(int c)
{
	int last;
	last = c % 10;

	if (last < 0)
		last = last * -1;
	_putchar(last + '0');

	return (last);
}
