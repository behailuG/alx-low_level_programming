#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet - prints lower case alphabet
 * Return: Always 0.
 */
void print_alphabet()
{
	int lower;
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
