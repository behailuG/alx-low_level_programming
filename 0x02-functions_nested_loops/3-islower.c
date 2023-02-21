#include "main.h"
#include <ctype.h>
/**
 * _islower - is lower
 * Return: always 1.
 */
int _islower(int c)
{
	return ((islower(c)) == 512 ? 1 : 0);
}
