#include<string.h>
/**
 * _strncpy - Copy n character from src into dest
 * @dest: The destination string
 * @src: The source string
 * @n: Number of characters to be copied
 *
 * Return: Pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
