#include<stdio.h>
#include "main.h"
/**
* print_to_98 - Print the set of numbers from
* a specifed number to 98
* @n: Number to start counting from
*/
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98 ; i++)
		{
			if (i == 98)
			{
				printf("%d\n", i);
				continue;
			}
			printf("%d, ", i);
		}

	}
	else
	{
		for (i = n ; i >= 98 ; i--)
		{
			if (i == 98)
			{
				printf("%d\n", i);
				continue;
			}
			printf("%d, ", i);
		}
	}

}
