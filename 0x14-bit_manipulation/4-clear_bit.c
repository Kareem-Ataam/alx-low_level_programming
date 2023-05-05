#include "main.h"
/**
 * clear_bit - Clear a bit at specific index
 * @n: The number to work on
 * @index: Index of the bit to return
 * Return: 1 (On success) and -1 (failure)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	(*n) = (*n & ~(1UL << index));
	return (1);
}
