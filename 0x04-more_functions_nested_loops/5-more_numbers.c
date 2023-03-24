#include<stdio.h>
#include "main.h"
/**
* more_numbers - Print 10 times the numbers from 0-14
*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			printf("%d", j);
		}
		_putchar('\n');
	}
}
