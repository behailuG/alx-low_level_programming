#include "main.h"
/**
 * _sqrt - square root checker
 * @i: number
 * _sqrt_recursion - square of what
 * @n: square root
 * Return: number
 */
int _sqrt(int n, int i);

int _sqrt(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	else
		return ((i * i) == n ? i : _sqrt(n, i + 1));
}

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
