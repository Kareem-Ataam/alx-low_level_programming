#include"main.h"
/**
 * wildcmp - Check if two strings are identical
 * @s1: First string
 * @s2: Second string
 *
 * Return: 1 if they are identical 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
	{
		return ((*s1 == '\0'));
	}
	if (*s2 == '*')
	{
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
			{
				return (1);
			}
			s1++;
		}
		return (wildcmp(s1, s2 + 1));
	}
	if (*s1 != '\0' && (*s1 == *s2))
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
