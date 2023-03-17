#include <stdio.h>
/**
* main - A programs that prints the alphabet in low then
* upper case
* Return: 0 (Success)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c += 1;
	}

	putchar('\n');
	return (0);
}
