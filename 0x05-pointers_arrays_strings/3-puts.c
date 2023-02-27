#include "main.h"
/**
 * _puts - display string
 * @str: param
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_put(*str);
		str++;
	}
	_put('\n');
}
