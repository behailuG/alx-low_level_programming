#include <unistd.h>
/**
 * _putchar - put character
 * @a: param
 * Return: character
 */
char _putchar(char a)
{
	return (write(1, &a,1));
}
