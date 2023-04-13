#include<stdlib.h>
/**
 * malloc_checked - Alloacate a block of memory in the heap
 * @b: Size of the block in bytes
 * Return: Pointer to the allocated block
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
