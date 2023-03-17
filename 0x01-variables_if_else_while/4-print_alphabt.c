#include <stdio.h>
/**
* main - A programs that prints the alphabet except
* e and q
* Return: 0 (Success)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c += 1;
			continue;
		}
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}


