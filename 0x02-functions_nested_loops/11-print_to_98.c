#include "main.h"
/**
 * print_to_98 - print upto 98
 * @n: parameter
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				_putchar(9 + '0');
				_putchar(8 + '0');
				break;
			}
			else
			{
				_putchar(n + '0');
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				_putchar(9 + '0');
				_putchar(8 + '0');
				break;
			}
			else
			{
				_putchar(n + '0');
			}
		}
	}
}
