#include<ctype.h>
/**
* _isupper - Check is a given charcter is in upper case
* or in lower case
* @c: The character to be checked
*
* Return: 1 i the character is in uppercase,
* 0 if the character is in lower case
*/
int _isupper(int c)
{
if (isupper(c))
{
	return (1);
}
return (0);
}
