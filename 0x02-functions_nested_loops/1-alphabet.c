#include "main.h"
/**
* main - Prints the alphbets in lowercase
* Return: 0 (Success)
*/
int main(void)
{
	print_alphabet();
	return (0);
}

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
