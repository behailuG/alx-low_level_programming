#include "main.h"
/**
 * print_to_98 - print upto 98
 * @n: parameter
 */
void print_to_98(int n)
{
	int i, rem, k, nn, len = 0, number;
	char str[5]="abcde";
    number = n;
    nn = n;
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
	if (nn <= 98)
	{
    		for (; nn <= 98; nn++)
    		{
    			for (k = 0; k < len; k++)
    			{
		 		_putchar(str[k]);
    			}
			if (nn != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
				break;
			}
    		}
	}
	else
	{
		for (; nn >= 98; nn--)
		{
			for (k = 0; k < len; k++)
			{
				_putchar(str[k]);
			}
			if (nn != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
				break;
			}
		}	
	}
}
