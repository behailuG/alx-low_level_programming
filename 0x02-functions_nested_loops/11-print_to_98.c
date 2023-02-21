#include "main.h"
/**
 * print_to_98 - print upto 98
 * @n: parameter
 */
void print_to_98(int n)
{
	int i;
	int x;
	int count;
	char str[4];
	int j, rem, len = 0, num;
	num = n;

	while (num != 0)
	{
		len++;
		num /= 10;
	}
	for (i = 0; i < len; j++)
	{
		rem = n % 10;
		n = n / 10;
		str[len - (j + 1)] = rem + '0';
	}
	str[len] = '\0';

	for (count = 0; str[count] != '\0'; ++count)
		_putchar(str[count] + '0');
	if (i > 98)
		i--;
	if (i < 98)
		i++;
	if (i == 98)
		break;
	if (i != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}
