#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print name
 * @name: name
 * @f: function pointer parameter
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
