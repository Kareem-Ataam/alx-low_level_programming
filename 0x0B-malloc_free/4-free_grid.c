#include<stdlib.h>
/**
 * free_grid - Free a 2d array in the heap
 * @grid: Address of the 2d array
 * @height: Number of rows
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
