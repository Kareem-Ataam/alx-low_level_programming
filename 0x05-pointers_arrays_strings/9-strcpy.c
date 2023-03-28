/**
 * _strcpy - Copy src string to dest string
 * @src: Source
 * @dest: Destination
 *
 * Return: Pointer to the destination
 */
#include<string.h>
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
