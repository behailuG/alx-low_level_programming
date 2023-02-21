#include "main.h"
/**
 * print_to_98 - print upto 98
 * @n: parameter
 */
void print_to_98(int n)
{
	int len = 0;
	int i;
	int rem = 0;
	int num;
	num = n;
	while (n != 0)
	{
		len++;
		num /= 10;
	}
	char str[4];

	for (i = 0; i < len; i++)
	{
		rem = n % 10;
		n = n / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';
}
