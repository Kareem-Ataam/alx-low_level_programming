#include<string.h>
#include"main.h"
/**
 *_strpbrk - Searche a string for any of a set of bytes
 * @s: The string to scan
 * @accept: The src string
 *
 * Return: Pointer to first occurrence in the string s of any
 * of the bytes in the string accept
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
