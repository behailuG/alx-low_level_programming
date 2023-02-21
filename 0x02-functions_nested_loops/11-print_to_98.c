#include "main.h"
/**
 * print_to_98 - print upto 98
 * @n: parameter
 */
void print_to_98(int n)
{
	int x;

	for (; n <= 98; n++)
	{
		_putchar(n + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}

	}
}
