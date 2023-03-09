#include <unistd.h>
/**
 * _putchar - display
 * @c: param
 * Return: character
 */
char _putchar(int c)
{
	return (write(1, &c, 1));
}
