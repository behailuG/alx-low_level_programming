#include "main.h"
/**
 * get_endianness - get
 * Return: bit
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
