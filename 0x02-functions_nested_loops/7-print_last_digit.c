#include "main.h"
/**
 * print_last_digit - print last digit
 * @c: parameter
 * Return: Last digit
 */
int print_last_digit(int c)
{
	_putchar(c % 10);
	return (c %10);
}
