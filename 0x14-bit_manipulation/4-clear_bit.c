#include "main.h"
/**
 * clear_bit - clear bit at the index
 * @n: number
 * @index: index
 * Return: new number
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= (~(1 << index));
		return (1);
}
