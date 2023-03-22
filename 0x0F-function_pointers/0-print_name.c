#include "main.h"
/**
 * print_name - print name
 * @name: name
 * @f: function pointer parameter
 */
void print_name(char *name, void (*f)(char *))
{
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}
}
