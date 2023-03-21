#include <ctype.h>
#include "main.h"
/**
* _islower - Check if a given character is
* in upper or lower case
* @c: The character that will be checked
*
* Return: 1 if the character is in lowercase
* and 0 if the character is in uppercase
*/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

