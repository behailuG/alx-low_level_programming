#include "main.h"
/**
 * more_numbers - print numbers
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 15)
	{
		j = 0;
		while (j < 15)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
