#include<string.h>
#include"main.h"
/**
 * is_palindrome - Check if a string is palindrome
 * @s: The string to be checked
 * Return: (1) if palindrome (0) otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	if (len <= 1)
	{
		return (1);
	}
	else if (s[0] != s[len - 1])
	{
		return (0);
	}
	else
	{
		s[len - 1] = '\0';
		return (is_palindrome(&s[1]));
	}
}
