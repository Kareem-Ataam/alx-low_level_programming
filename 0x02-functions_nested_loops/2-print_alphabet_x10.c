#include "main.h"
/**
* print_alphabet_x10 - Print the alphabets 10 times in lower
* case without using builtin function
*/
void print_alphabet_x10(void)
{
	char c  = 'a';
	int counter = 0;

	while (counter < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		counter++;
		c = 'a';
		_putchar('\n');
	}
}
