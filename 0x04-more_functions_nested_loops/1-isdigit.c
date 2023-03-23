#include<ctype.h>
/**
* _isdigit - Check is a given charcter is digit
* @c: The character to be checked
*
* Return: 1 i the character is in uppercase,
* 0 if the character is in lower case
*/
int _isdigit(int c)
{
if (isdigit(c))
{
	return (1);
}
return (0);
}
