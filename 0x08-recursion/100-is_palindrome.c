#include<string.h>
#include"main.h"
/**
 * comp - compares the characters of a string
 * @c: the string
 * @num1: first pointer
 * @num2: Second pointer
 * Return: Result of compariosn
 */
int comp(char *c, int num1, int num2)
{
	if (*(c + num1) == *(c + num2))
	{
		if (num1 == num2 || num1 == num2 + 1)
		{
			return (1);
		}
		return (0 + comp(c, num1 + 1, num2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - Check if a string is palindrome
 * @s: The string to be checked
 * Return: (1) if palindrome (0) otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp(s, 0, strlen(s) - 1));

}
