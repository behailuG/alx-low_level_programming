#include <unistd.h>
/**
 * _putchar - method
 * @a: character
 * Return: character
 */
char _putchar(char a)
{
	return (write(1, &a, 1));
}
