#include <stdlib.h>
#include "main.h"

/**
* print_last_digit - Print the last digit of a number
* @n: The number to work on
* Return: the last digit of the number
*/
int print_last_digit(int n)
{
	int temp;

	temp  = n % 10;
	_putchar(temp + '0');
	return (n % 10);
}
