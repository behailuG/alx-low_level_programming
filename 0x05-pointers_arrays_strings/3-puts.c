#include "main.h"
#include <stdio.h>
/**
 * _puts - display string
 * @str: param
 */
void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		put(str[i]);
		i++;
	}
	put('\n');
}
