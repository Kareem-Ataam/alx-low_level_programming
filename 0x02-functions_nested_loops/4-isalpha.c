#include <ctype.h>
#include "main.h"
/**
* _isalpha - Check if a given argument is
* one of the alphabets
* @c: The character that will be checked
*
* Return: 1 if c  is a lowercase or uppercase alphabet
* and 0 otherwise
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
