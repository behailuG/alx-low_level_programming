#include "main.h"
/**
 * factorial - factorial calc
 * @n: numbber of fictorial
 * Retutn: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
