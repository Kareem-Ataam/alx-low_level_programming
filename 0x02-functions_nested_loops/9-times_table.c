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
			if (i * j > 9)
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			else
			{
			_putchar((i * j) + '0');
			}
			if (j == 9)
			{
				_putchar('$');
				continue;
			}
			_putchar(',');
			if (i * j + 1 > 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
