#include<stdio.h>
/**
 * print_array - Print number of elments from an array
 * @a: The array to print from
 * @n: Number  of elements to print
 *
 */
void print_array(int *a, int n)
{
	size_t i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			break;
		}
		printf(", ");
	}
	putchar('\n');
}