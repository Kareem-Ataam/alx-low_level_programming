#include"main.h"
/**
 * print_diagsums - Print the sum of the two diagonals of 2d array
 * @a: Pointer to the first element of the array
 * @size: Number of rows and columns of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int firstSum, secondSum, i, j;

	firstSum = 0;
	secondSum = 0;
	j = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i == j)
		{
			firstSum += a[i];
			j += size + 1;
		}
	}
	_putchar(firstSum + '0');
	j = size - 1;

	for (i = size - 1; i < size * size; i++)
	{
		if (i == j)
		{
			secondSum += a[i];
			j += size - 1;
		}
	}
	_putchar(' ');
	_putchar(secondSum - a[size * size - 1] + '0');
	_putchar('\n');

}
