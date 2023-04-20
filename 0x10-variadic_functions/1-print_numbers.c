#include<stdarg.h>
#include<stdlib.h>
#include<stdio.h>
#include"variadic_functions.h"
/**
 * print_numbers - Print the numbers passed to the function
 * @separator: The separator used among the numbers
 * @n: Number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(ptr, int));
			break;
		}
		printf("%d", va_arg(ptr, int));
		if (!separator)
		{
			continue;
		}
		printf("%s", separator);
	}
	va_end(ptr);
}
