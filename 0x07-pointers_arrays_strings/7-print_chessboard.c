#include<string.h>
#include<stdio.h>
#include"main.h"
/**
 * print_chesboard - Print the chessboard
 * @a: Two dimensional containg board elements
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		if (i == 7)
		{
			break;
		}
		_putchar('\n');
	}
}
