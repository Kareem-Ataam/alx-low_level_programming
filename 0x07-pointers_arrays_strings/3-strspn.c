#include<string.h>
#include"main.h"
/**
 * _strspn - Get the Length of prefix string
 * @s: The string to scan
 * @accept: The string to search in
 *
 * Return: Length of the suffix string
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
