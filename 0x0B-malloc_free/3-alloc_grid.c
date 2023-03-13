#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - allocate 2 diamentional array
 * @width: width
 * @height: height
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s != NULL)
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				s[i][j] = 0;
			}
		}
		return (s);
	}
	return (NULL);
}
