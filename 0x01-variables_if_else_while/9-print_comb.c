#include <stdio.h>
/**
* main - A program that prints 0-9 separated by
* commas
* Return: 0 (Success)
*/
int main(void)
{
	int dec = 0;

	while (dec <= 9)
	{
		putchar('0' + dec);
		if (dec == 9)
		{
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');
		dec++;
	}
	return (0);
}
