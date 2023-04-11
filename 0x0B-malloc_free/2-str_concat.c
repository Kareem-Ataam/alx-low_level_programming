#include<string.h>
#include<stdlib.h>
/**
 * str_concat - Concate two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the result
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	size_t i, j;
	size_t len1, len2;

	len1 = (s1 == NULL) ? 0 : strlen(s1);
	len2 = (s2 == NULL) ? 0 : strlen(s2);
	j = 0;
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	ptr = malloc(len1 + len2 + 1);
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = len1; i < len1 + len2; i++, j++)
	{
		ptr[i] = s2[j];
	}
	ptr[len1 + len2] = '\0';

	return (ptr);
}
