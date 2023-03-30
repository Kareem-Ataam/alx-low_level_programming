#include<string.h>
/**
 * string_toupper - Convert all the lower characters of a
 * to upper case
 * @str: The srting to work upon
 *
 * Return: Pointer  to the resulting string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
