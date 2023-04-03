#include<string.h>
#include"main.h"
/**
 * _strchr - Locate a character in a string
 * @s: The string to scan
 * @c: The character
 *
 * Return: Pointer the first occurance of the character
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
