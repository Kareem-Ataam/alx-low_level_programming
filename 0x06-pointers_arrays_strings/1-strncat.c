#include<string.h>
/**
 * _strncat - Concate n characters from src to dest
 * @dest: This is the destination string
 * @src: This is the src string
 * @n: The number of characters to be concatnated from src
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
