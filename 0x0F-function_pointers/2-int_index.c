#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - int index
 * @array: array list
 * @size: size
 * @cmp: comparare
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
