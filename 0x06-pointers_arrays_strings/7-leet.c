/**
 * leet - Reformat a string to be in leet speak
 * @str: The string to work on.
 *
 * Return: The resulting string.
 */
char *leet(char *str)
{
	int i, j;
	char s[] = "AaEeOoTtLl";
	char mapping[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s[j])
			{
				str[i] = mapping[j];
			}
		}
	}
	return (str);
}
