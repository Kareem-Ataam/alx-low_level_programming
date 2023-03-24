#include "main.h"
/**
* print_line - Print a line containing n _
* @n: Number of _
*
*/
void print_line(int n)
{
	if (n < 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
}
