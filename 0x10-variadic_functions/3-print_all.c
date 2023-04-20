#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * print_all - Print all the arguments passed
 * to the function in different formats
 * @format: Foramt to use while printing
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	size_t i = 0, j, c = 0;
	char *str;
	const char args[] = "cifs";

	va_start(ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (args[j])
		{
			if (format[i] == args[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(ptr, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(ptr, double)), c = 1;
				break;
			case 's':
				str = va_arg(ptr, char *), c = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(ptr);
}
