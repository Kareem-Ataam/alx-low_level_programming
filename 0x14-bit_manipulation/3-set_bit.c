#include "main.h"
/**
 * set_bit - Set the value of a bit at specific index
 * @n: Pointer the whole number
 * @index:Index of the bit
 * Return: The new number after setting the bit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	(*n) = (*n | 1UL << index);
	return (1);
}
