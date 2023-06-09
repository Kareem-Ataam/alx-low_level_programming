#include<stdlib.h>
/**
 * alloc_grid - Create a 2d array in the Heap
 * @width: Number of columns
 * @height: Number of rows
 *
 * Return: Pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int i, j, temp;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == NULL)
		{
			for (temp = 0; temp <= i; temp++)
			{
				free(arr[temp]);
			}
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
