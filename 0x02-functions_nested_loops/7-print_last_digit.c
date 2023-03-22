#include <stdlib.h>
#include "main.h"

/**
* print_last_digit - Print the last digit of a number
* @n: The number to work on
* Return: the last digit of the number
*/
int print_last_digit(int n)
{
	unsigned int temp;
	int last;

	temp  = abs(n);
	last = temp % 10;
	_putchar(last + '0');
	return (last);
}
