#include "main.h"
/**
* print_to_98 - Print the set of numbers from
* a specifed number to 98
* @n: Number to start counting from
*/
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98 ; i++)
			_putchar(i);
	}
	else
	{
		for (i = n ; i >= 98 ; i--)
			_putchar(i);
	}
}
