#include "main.h"
/**
 * get_bit - Get the bit value at specific index
 * @n: The number to work on
 * @index: Index of the bit to return
 * Return: The value of the bit (On success) and -1 (failure)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int count;

	count = 0;
	if (index > 63)
		return (-1);
	while (n)
	{
		if (count == index)
			return (n % 2);
		n /= 2;
		count++;
	}
	return (0);
}
