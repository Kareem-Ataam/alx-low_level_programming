#include<stdio.h>
#include"main.h"
/**
 * print_binary - print the binary representation of an integer
 * @n: The number to print its binary corresponding
 */
void print_binary(unsigned long int n)
{
	if (n >> 1)
	{
		print_binary(n >> 1);
	}
	/*Check if the least significant bit is zero or one*/
	_putchar((n & 1) ? '1' : '0');
}
