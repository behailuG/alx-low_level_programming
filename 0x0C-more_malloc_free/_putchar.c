#include <unistd.h>
/**
 * _putchar - methos
 * @c: character
 * Return: character
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
