#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * print_strings - Print all the strings passed to the function
 * @separator:  The separator between the strings
 * @n: Number of strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i;
	char *value;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(ptr, char*);
		if (i == n - 1)
		{
			if (value != NULL)
			{
				printf("%s", value);
			}
			else
			{
				printf("(nil)\n");
			}
			break;
		}
		if (value != NULL)
		{
			printf("%s", value);
		}
		else
		{
			printf("(nil)");
		}
		if (!separator)
		{
			continue;
		}
		printf("%s", separator);
	}
	printf("\n");
		va_end(ptr);
}
