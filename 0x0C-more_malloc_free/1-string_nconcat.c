#include<stdlib.h>
#include<string.h>
/**
 * string_nconcat - Concate the first string with the first n characters
 * of the second string
 * @s1: The first string
 * @s2: The second string
 * @n: Number of characters to take from the second string
 *
 * Return: Pointer to the result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2, i, j;
	char *ptr;

	len1 = (s1 == NULL) ? 0 : strlen(s1);
	len2 = (s2 == NULL) ? 0 : strlen(s2);

	if (n > len2)
	{
		n = len2;
	}
	ptr = malloc(len1 + n + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	j = 0;
	for (i = len1; i < len1 + n; i++, j++)
	{
		ptr[i] = s2[j];
	}
	ptr[len1 + n] = '\0';
	return (ptr);
}
