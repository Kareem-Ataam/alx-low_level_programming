#include <stdio.h>
/**
* main - A programs that prints the alphabet in reverse order
* Return: 0 (Success)
*/
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c -= 1;
	}
	putchar('\n');
	return (0);
}
