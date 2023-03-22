#include "main.h"
/**
* times_table - Print a table of numbers of i*j
*/
void times_table(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			_putchar((i * j) + '0');
		}
		_putchar('\n');
	}
}
