#include "main.h"
#include <stdlib.h>
/**
 * free_grid - release memory allocation
 * @grid: diamension
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
