#include <stdio.h>
/**
* main - A program that prints the numbers of base 16
* Return: 0 (Success)
*/
int main(void)
{
	int b = 0x0;

	while (b <= 0xf)
	{
		putchar('0' + b);
		b++;
	}
	putchar('\n');
	return (0);
}

