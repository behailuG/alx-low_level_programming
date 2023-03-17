#include "main.h"
#include <stdlib.h>
/**
  * *array_range - arrar allocation
  * @min: minimum size
  * @max: maximum size
  * Return: new allocated memory
  */
int *array_range(int min, int max)
{
	int *s, i = 0;

	if (min > max)
		return (NULL);
	s = (int *)malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (s == NULL)
		return (NULL);
	while (min <= max)
	{
		s[i] = min;
		i++;
		min++;
	}
	return (s);
}
