#include "main.h"
/**
 * print_last_digit - print last digit
 * @c: parameter
 * Return: Last digit
 */
int print_last_digit(int c)
{
	if(c < 0)
		c *= -1;
	return (c % 10);
}
