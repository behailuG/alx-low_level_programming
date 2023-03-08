#include "main.h"

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - square root
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - square root finder
 * @n: root
 * @i: number
 * Return: square
 */
int _sqrt(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	else
		return ((i * i) == n ? i : _sqrt(n, i + 1));
}
