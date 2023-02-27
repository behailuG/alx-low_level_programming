#include "main.h"
/**
 * puts_half - print half
 * @str: paaram
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		i = (i - 1) / 2;
		_putchar(str[i]);
	}
	_putchar('\n');

}
