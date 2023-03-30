#include<string.h>
/**
 * _strcat - Concatnate two strings and save the result into dest
 * @dest: The destination string
 * @src: The src string
 *
 * Return: Pointer the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
