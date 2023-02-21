#include "main.h"
/**
 * print_to_98 - print upto 98
 * @n: parameter
 */
void print_to_98(int n)
{
	int i, rem, len = 0, number;
	char str[5]="abcde";
    number = n;
    while (number != 0)
    {
        len++;
        number /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = n % 10;
        n = n / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';

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
