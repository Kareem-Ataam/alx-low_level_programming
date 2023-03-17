#include <stdio.h>
/**
* main - A programs that prints from 0-9
* Return: 0 (Success)
*/
int main(void)
{
	char c = '1';

	while (c <= '9')
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
