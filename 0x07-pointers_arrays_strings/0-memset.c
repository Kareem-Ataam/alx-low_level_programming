#include"main.h"
/**
 * _memset - Fill n bytes of memory with a constant
 * @s: Pointer the first location in the memory area to fill
 * @b: The constant
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the memory are that was filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
