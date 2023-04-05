#include"main.h"
/**
 * _pow_recursion - Calculate the value of a number powered
 * to another number
 * @x: The base
 * @y: The power
 *
 * Return: The result of x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
