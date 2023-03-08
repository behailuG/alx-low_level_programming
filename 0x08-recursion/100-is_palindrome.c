#include "main.h"

/**
 * is_palindrome - Returns if a string is palindrome
 * @s: the string value to be checked
 * Return: integer value
 */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (comparator(s, 0, _strlen_recursion(s) - 1));
}

/**
 * comparator - compare
 * @s: string
 * @n1: first index
 * @n2: second index
 * Return: 1 or 0.
 */
int comparator(char *s, int n1, n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
  * _strlen_recursion - Get the length of a string
  * @s: the string to get the length
  *
  * Return: the string length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
