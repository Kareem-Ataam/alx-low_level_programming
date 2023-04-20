#include<stdarg.h>
#include<stdlib.h>
#include"variadic_functions.h"
/**
 * sum_them_all - Calculate the sum of all the args passed to a function
 * @n: Number of args passed
 * Return: The result of the summation
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	size_t i;
	va_list ptr;

	sum = 0;
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
