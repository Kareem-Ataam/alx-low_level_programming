#include "main.h"
/**
 * flip_bits - Count the number of bit that should be flipped in n
 * to become equal to m
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive_or, count;

	exclusive_or = n ^ m;
	count = 0;
	while (exclusive_or)
	{
		if (exclusive_or & 1)
			count++;
		exclusive_or >>= 1;
	}
	return (count);
}
