#include<stdio.h>
#include<string.h>
/**
 * puts_half - Print half of a string
 * @str: The string to work on
 */
void puts_half(char *str)
{
	size_t i;

	if (strlen(str) % 2 != 0)
	{
		i = strlen(str) / 2 + 1;
	}
	else
	{
		i = strlen(str) / 2;
	}

	for (; i < strlen(str); i++)
	{
		printf("%c", str[i]);
	}
	putchar('\n');
}
