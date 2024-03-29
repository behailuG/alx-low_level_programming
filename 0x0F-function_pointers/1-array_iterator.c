#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - array iteration
 * @array: array
 * @size: size of array
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL || size < 1)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
