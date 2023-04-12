#include<stdlib.h>
#include<stdio.h>
int **alloc_grid(int width, int height)
{
    int i, j, temp;
    int **arr;

    if (width <= 0 ||height <= 0)
    {
        return (NULL);
    }
    arr = malloc(height * sizeof(int*));
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
                free(arr[i]);
            }
            free(arr);
            return (NULL);
        }
    }
    for(i = 0; i <height; i++)
    {
        for (j = 0; j < width; j++)
        {
            arr[i][j] = 0;
        }
    }
    return (arr);
}
void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}
int main()
{
	 int **grid;
	int h;
	int w;

	h = 20;
	w = 20;
	grid = alloc_grid(h, w);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, h, w);
	printf("\n");
	free(grid);
	return (0);
}
