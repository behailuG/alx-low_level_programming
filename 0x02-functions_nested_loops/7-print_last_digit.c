#include "main.h"
#include <limits.h>
/**
 * print_last_digit - print last digit
 * @c: parameter
 * Return: Last digit
 */
int print_last_digit(int c)
{
	if (c < 0)
		c *= -1;
	int x;
	x=c % 10;
	_putchar(x + '0');
	return (x % 10);
}
