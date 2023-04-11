#include<stdlib.h>
#include<string.h>
/**
 * _strdup - Allocate a memory in the heap for a passed string
 * @str: The string to duplicate
 *
 * Return: Pointer to the allocated memory
 */
char *_strdup(char *str)
{
	char *ptr;
	size_t i;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(strlen(str) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(str); i++)
	{
		ptr[i] = str[i];
	}
	ptr[strlen(str)] = '\0';
	return (ptr);
}
