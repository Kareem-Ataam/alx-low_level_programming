#include <stdio.h>
/**
* main - A program that prints the numbers of base 16
* Return: 0 (Success)
*/
int main(void)
{
	int b = 0;
	char c = 'a';

	for (; b <= 9; b++)
		putchar(b + '0');

	for (; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

