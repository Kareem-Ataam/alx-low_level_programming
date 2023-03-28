#include<string.h>
#include<stdio.h>
/**
 * puts2 - Print the other characters starting from
 * the first character
 * @str: The string to work on
 */
void puts2(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i += 2)
	{
		printf("%c", str[i]);
	}
	putchar('\n');
}
