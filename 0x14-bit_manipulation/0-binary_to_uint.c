#include "main.h"
/**
 * binary_to_uint - convert binary to unit
 * @b: binary
 * Return: unit
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int len = 0, c = 1;

	if (b == NULL)
		return (0);
	len = checkBinary(b);
	if (len > 0)
	{
		while (len--)
		{
			if (b[len] == 49)
				sum += c;
			c *= 2;
		}
	}
	return (sum);
}
/**
 * checkBinary - check the given string is binary
 * @binary: binary number
 * Return: legth;
 */
int checkBinary(const char *binary)
{
	unsigned int i = 0;

	while (binary[i])
	{
		if (binary[i] != 48 && binary[i] != 49)
		{
			i = 0;
			break;
		}
		i++;
	}
	return (i);
}
