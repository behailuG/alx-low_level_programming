#include "main.h"

/**
 * print_alphabet -> prints lower case alphabet
 */
void print_alphabet(void)
{
	int lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
