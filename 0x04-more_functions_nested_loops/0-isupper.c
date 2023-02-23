#include "main.h"
/**
 * _isupper - upercase
 * @c: parameter
 * Return: 1
 */
int _isupper(int c)
{
	return (isupper(c + '0') ? 1 : 0);
}
