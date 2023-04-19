#include<stdlib.h>
#include"function_pointers.h"
/**
 * array_iterator - Execute a function on the elements of an array
 * @array: The array
 * @size: The size of the array
 * @action: Pointer to the function to be implmented
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || size <= 0 || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
