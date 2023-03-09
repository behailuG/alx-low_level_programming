#include <unistd.h>
/**
 * _putchar - display charactr
 * @c: param
 * Return: retur character
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
