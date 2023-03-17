#include <stdio.h>
/**
* main - A programs that prints from 0-9
* Return: 0 (Success)
*/
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar('0' + c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
