#include <unistd.h>
/**
 * _putchar - display character
 * @c: charecter
 * Return: return character
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
