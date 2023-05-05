#include <string.h>
#include <math.h>
#include <ctype.h>
#include "main.h"
/**
 * binary_to_uint - Convert a binary number to integer
 * @b: Pointer to a string of bits(binary representation)
 * Return: Unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, final_num;

	final_num = 0;
	j = 0;
	if (b)
	{
		for (i = strlen(b) - 1; i >= 0; i--, j++)
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
			final_num += (b[i] - '0') * pow(2, j);
		}
		return (final_num);
	}
	return (0);
}
