#include<stdlib.h>
/**
 * array_range - Create an array in the heap containg a range
 * of numbers starting from min to max
 * @min: The starting number
 * @max: The last number
 *
 * Return: Pointer to the array in the heap
 */
int *array_range(int min, int max)
{
	int *ptr, i, j;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	j = min;
	for (i = 0; i < (max - min + 1); i++, j++)
	{
		ptr[i] = j;
	}
	return (ptr);

}
