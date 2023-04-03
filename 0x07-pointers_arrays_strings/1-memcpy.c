#include<string.h>
#include"main.h"
/**
 * _memcpy - Copy area of the memory
 * @dest: The destination
 * @src: The Source
 * @n: Number of characters to copy
 *
 * Return: Pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
