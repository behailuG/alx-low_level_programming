#include "main.h"
/**
 * swap_int - swap integer
 * @a: param one
 * @b: param two
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
