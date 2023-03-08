#include "main.h"
int _prime(int n, int i);
/**
 * is_prime_number - prime number
 * @n: number
 * Return: 1 0r 0.
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 * _prime - find prime number
 * @n: number
 * @i: iteration
 * Return: 1 0r 0.
 */
int _prime(int n, int i)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n == i)
		return (1);
	if (n % i == 0 && i > 1)
		return (0);
	return (_prime(n, i + 1));
}
