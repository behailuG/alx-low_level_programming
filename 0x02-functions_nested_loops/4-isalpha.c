#include "main.h"
/**
 * _isalpha - is alphabet
 * @c: parameter
 * Return: Always 1 for alphabet else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);
}
