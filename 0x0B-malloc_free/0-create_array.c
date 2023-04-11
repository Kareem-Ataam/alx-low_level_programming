#include<stdlib.h>
#include"main.h"
/**
 * create_array - Allocate a number of bytes in the heap
 * @size: number of bytes to be allocated
 * @c: The character to intialize allocated locations with
 * Return: Pointer the allocated block
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	size_t i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *) malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
