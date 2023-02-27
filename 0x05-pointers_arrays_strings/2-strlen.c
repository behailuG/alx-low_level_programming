#include "main.h"
/**
 * _strlen - return string length
 * @s: param
 * Return: length
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (s != '\0')
	{
		counter++;
	}

	return (counter);
}
