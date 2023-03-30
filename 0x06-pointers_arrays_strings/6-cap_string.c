#include<ctype.h>
#include<string.h>
/**
 * cap_string - Captalize all the words of a string
 * @str: The string to work on
 *
 * Return: The new captalized string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{


		if (str[i] == ' ' || str[i] == ',' || str[i] == '\n'
|| str[i] == '\t' || str[i] == ';' || str[i] == '.'
|| str[i] == '!' || str[i] == '?' || str[i] == '"'
|| str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (isalpha(str[i + 1]))
			{
				str[i + 1] = toupper(str[i + 1]);
			}
		}
		i++;
	}
	return (str);
}
