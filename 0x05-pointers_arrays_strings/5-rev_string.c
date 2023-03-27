/**
 * rev_string -Reverses a string
 * @s: The string to reverse
 */
void rev_string(char *s)
{
	int j = 0;
	char temp;

	for (int i = strlen(s) - 1; i >= strlen(s) / 2; i--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
	}
}
