#include "main.h"
/**
* print_alphabet - Print the alphabets in lower case
* Without using builtin function
*/
void print_alphabet(void)
{
	char c  = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
