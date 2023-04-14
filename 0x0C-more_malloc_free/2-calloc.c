#include<stdlib.h>
#include<string.h>
/**
 * _calloc - Allocate an array of the heap memory and intialize it with zero
 * @nmemb: Number of array elements
 * @size: Size of each element
 *
 * Return: Pointer to the allocated array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (memset(ptr, 0, nmemb * size));
}

