#include "main.h"
/**
 * set_bit - set bit at index
 * @n: number
 * @index: index
 * Return: new number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((*n |= 1 << index) ? 1 : -1);
}
