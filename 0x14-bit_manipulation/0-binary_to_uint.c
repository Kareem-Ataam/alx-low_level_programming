#include "main.h"
/**
 * binary_to_uint - Convert a binary number to integer
 * @b: Pointer to a string of bits(binary representation)
 * Return: Unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int final_num, i;

	final_num = 0;
	if (b)
	{
		for (i = 0; b[i]; i++)
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
			final_num = 2 * final_num + (b[i] - '0');
		}
		return (final_num);
	}
	return (0);
}
