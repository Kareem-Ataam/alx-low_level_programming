#include"function_pointers.h"
/**
 * int_index - Search for an element that meet specifc condition
 * which will be specified by the function that will be passed
 * @array: The array to search in
 * @size: Number of elements in the array
 * @cmp: Pointer to the function that will be specified
 *
 * Return: index of the number or -1 if the element doesn't exist
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
