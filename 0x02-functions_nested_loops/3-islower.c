#include "main.h"
#include <ctype.h>
/**
 * _islower - is low case
 * @c: parameter
 * Return: always 1 if true else 0 for false.
 */
int _islower(int c)
{
	return ((islower(c)) == 512 ? 1 : 0);
}
